#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	char[] cLocal_15[8] = 0;
	struct<12> Local_16[1];
	struct<193> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_222 = 0;
	struct<6> Local_223 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	struct<32> Local_231[4];
	var uLocal_360 = 17;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	struct<2> Local_497[17];
	vector3 vLocal_532 = { 0f, 0f, 0f };
	float fLocal_535 = 0f;
	vector3 vLocal_536[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_543 = { 0f, 0f, 0f };
	char* sLocal_546[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_553[3] = { NULL, NULL, NULL };
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = -1;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 2;
	var uLocal_566 = 1;
	var uLocal_567 = 1;
	var uLocal_568 = 1;
	var uLocal_569 = 0;
	var uLocal_570 = 1;
	var uLocal_571 = 2;
	var uLocal_572 = 2;
	var uLocal_573 = 3;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 3;
	var uLocal_577 = 1;
	var uLocal_578 = 3;
	var uLocal_579 = 3;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594[2] = { 0, 0 };
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	float fLocal_599 = 0f;
	var uLocal_600[4] = { 0, 0, 0, 0 };
	var uLocal_605[4] = { 0, 0, 0, 0 };
	var uLocal_610 = 8;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_629[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	int iLocal_644[2] = { 0, 0 };
	bool bLocal_647 = false;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	struct<28> Local_651[2];
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = -1;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 1097859072;
	var uLocal_726 = 1000;
	var uLocal_727 = 1067450368;
	var uLocal_728 = 5000;
	var uLocal_729 = 42;
	var uLocal_730 = 1103626240;
	var uLocal_731 = 1077936128;
	var uLocal_732 = 1106247680;
	var uLocal_733 = 1103101952;
	var uLocal_734 = 1097859072;
	var uLocal_735 = 1103626240;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	vector3 vLocal_739[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	vector3 vLocal_752[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 15;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	struct<12> Local_918 = { 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0 } ;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	int iLocal_938 = 0;
	struct<75> Local_939[4];
	int iLocal_1240 = 0;
	struct<55> Local_1241 = { 0, 0, 0, 0, 0, 0, 0, 20, 10, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	bool bLocal_1298 = false;
	bool bLocal_1299 = false;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_15 = "PEEP";
	iLocal_585 = 1;
	fLocal_599 = 1.5f;
	iLocal_649 = -1;
	iLocal_938 = 3592;
	iLocal_1240 = func_1(1, 0, 0) | 64 | 128 | 256 | 2;
	bLocal_1298 = true;
	Local_29.f_3 = func_2(&vScriptParam_0);
	Local_29.f_43 = func_3();
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		Local_29.f_161 = func_4(vScriptParam_0.z, 2);
		func_5(&Local_29, 1);
	}
	while (true)
	{
		if (bVar0)
		{
			func_7(bVar0, 843/*func_6*/, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_585)
			{
				case 1:
					if (func_8(&Local_29, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_9(&Local_29, &iLocal_589, &iLocal_590);
						Local_29.f_51.f_4 = iLocal_590;
						func_11(&Local_29, iLocal_589, 1560/*func_10*/);
						func_12(iLocal_589, iLocal_590, &iLocal_14);
						func_13(iLocal_14);
						if (!Local_29.f_161)
						{
							if (func_14(102, iLocal_14) != 1)
							{
							}
							else
							{
								func_6();
							}
						}
						func_15(&uLocal_638, &uLocal_641);
						func_16(&uLocal_620, &uLocal_629);
						func_17(&Local_29, &iLocal_589, &iLocal_590);
						func_18(&uLocal_557);
						func_19(&Local_16);
						func_20(&Local_231, &vLocal_532, &vLocal_536, &vLocal_543, &fLocal_535);
						func_21(&(Local_29.f_5), &Local_651, &uLocal_708);
						iLocal_585 = 0;
					}
					else if (Local_29.f_160)
					{
						func_6();
					}
					break;
				case 0:
					if (func_22())
					{
						iLocal_585 = 3;
					}
					else if (!func_23(BUILTIN::VDIST(Global_36, Local_29.f_51), Local_29.f_3))
					{
						func_6();
					}
					break;
				case 3:
					if (func_24(0, 1))
					{
						iLocal_914 = 0;
						func_25();
						if (iLocal_14 == 0)
						{
						}
						else
						{
							func_26(Local_29.f_51, &Local_16, 0f, 1, 0, -1, 0);
						}
						func_27(iLocal_14, &((Local_939[0 /*75*/])->f_21));
						func_27(iLocal_14, &((Local_939[1 /*75*/])->f_21));
						func_28();
						iLocal_585 = 4;
					}
					break;
				case 4:
					if (!func_29(&Local_29, &uLocal_600, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					func_30();
					if (func_31())
					{
						Local_29.f_50 = 1;
						func_6();
					}
					if (func_32(&Local_29, &uLocal_600, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_29.f_158);
		}
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

var func_2(var uParam0)
{
	return *uParam0;
}

int func_3()
{
	return Global_1894899->f_2;
}

bool func_4(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_5(var uParam0, bool bParam1)
{
	func_33(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_34("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_6()
{
	int iVar0;

	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_35();
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_600[2])))
	{
		PED::_0x39A2FC5AF55A52B1(&(uLocal_600[2]), -1);
		PED::_0x36E4B61DC56DE77C(&(uLocal_600[2]), 7f, 20f, 5000, 10000);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_600[2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_600[3])))
	{
		PED::_0x39A2FC5AF55A52B1(&(uLocal_600[3]), -1);
		PED::_0x36E4B61DC56DE77C(&(uLocal_600[3]), 7f, 20f, 5000, 10000);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_600[3]);
	}
	func_36(&uLocal_610, 1);
	func_37(uLocal_620[0], uLocal_629[0]);
	func_37(uLocal_620[1], uLocal_629[1]);
	func_37(uLocal_620[2], uLocal_629[2]);
	func_38(&(uLocal_620[3]));
	func_38(&(uLocal_620[4]));
	func_38(&(uLocal_620[6]));
	func_38(&(uLocal_620[7]));
	if (VOLUME::_0x92A78D0BEDB332A3(&(uLocal_620[5])))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(&(uLocal_620[5]));
		func_38(&(uLocal_620[5]));
	}
	func_39(Local_223);
	func_39(Local_223.f_1);
	if (func_40(&(uLocal_600[0]), 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_600[0]), false);
	}
	if (func_40(&(uLocal_600[1]), 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_600[1]), false);
	}
	iVar0 = func_41(102, iLocal_14);
	if (Local_29.f_45)
	{
		if (func_42() == 102)
		{
			if (!Local_29.f_44)
			{
				iVar0++;
				func_43(102, iLocal_14, iVar0);
				if (iVar0 >= 3)
				{
					Local_29.f_44 = 1;
				}
			}
		}
	}
	if (iLocal_649 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_649);
	}
	func_45(&Local_29, &uLocal_600, &uLocal_605, iLocal_14, iLocal_589, iLocal_590, 0, 1, func_44(), 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_46(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_8(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_47(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_48(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_49(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_50(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_51(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_9(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
	}
}

Vector3 func_10(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_11(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	Stack.Push(uParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_12(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam2 = 0;
			break;
		default:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1;
					break;
				default:
					*uParam2 = 2;
					break;
			}
			break;
	}
}

void func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_52(1190076410);
			break;
	}
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_41(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

void func_15(var uParam0, var uParam1)
{
	switch (iLocal_14)
	{
		case 1:
			*uParam0 = { -284.2674f, 865.5158f, 120.1024f };
			*uParam1 = { -283.4608f, 871.796f, 120.1273f };
			break;
		case 2:
			*uParam0 = { -259.0413f, 732.8713f, 117.183f };
			*uParam1 = { -259.0413f, 732.8713f, 117.183f };
			break;
		case 0:
			*uParam0 = { -1784.119f, -404.2327f, 155.4618f };
			*uParam1 = { -285.435f, 865.6515f, 120.1257f };
			break;
		default:
			*uParam0 = { -285.435f, 865.6515f, 120.1257f };
			*uParam1 = { -285.435f, 865.6515f, 120.1257f };
			break;
	}
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;

	switch (iLocal_14)
	{
		case 1:
			func_53((*uParam0)[0], (*uParam1)[0], -284.763f, 865.133f, 120.555f, 0f, 0f, -6f, 3f, 4f, 2f, 1, 534496, 1, 2, 0);
			func_53((*uParam0)[1], (*uParam1)[1], -283.769f, 871.234f, 120.808f, 0f, 0f, -6f, 4f, 8f, 2f, 1, 534496, 1, 2, 0);
			func_53((*uParam0)[2], (*uParam1)[2], -293.913f, 861.629f, 120.412f, 0f, 0f, -5f, 10f, 4f, 2f, 1, 534496, 1, 2, 0);
			func_54((*uParam0)[3], -281.3292f, 865.2272f, 120.808f, 0f, 0f, -4f, 10f, 1.25f, 2f, "REPT_VOL_PLAYER_SEEN_1");
			func_54((*uParam0)[4], -280.5456f, 865.3428f, 120.808f, 0f, 0f, -4f, 6f, 4f, 2f, "REPT_VOL_PLAYER_SEEN_2");
			func_54((*uParam0)[6], -285.79f, 867.115f, 124.922f, 0f, 0f, -4.5f, 6f, 8f, 4f, "REPT_VOL_IGNORE_BREAKOUT");
			break;
		case 2:
			func_53((*uParam0)[0], (*uParam1)[0], -258.064f, 731.89f, 117.391f, 0f, 0f, 20.5f, 9f, 4f, 3f, 1, 534496, 1, 2, 0);
			func_53((*uParam0)[1], (*uParam1)[1], -254.327f, 740.865f, 118.464f, 0f, 0f, 20.5f, 3f, 15f, 3f, 1, 534496, 1, 2, 0);
			func_53((*uParam0)[2], (*uParam1)[2], -270.007f, 736.106f, 116.712f, 0f, 0f, 19.5f, 11f, 11f, 3f, 1, 534496, 1, 2, 0);
			func_54((*uParam0)[6], -260.756f, 734.223f, 121.985f, 0f, 0f, 21f, 6f, 5f, 4f, "REPT_VOL_IGNORE_BREAKOUT");
			break;
		case 0:
			func_53((*uParam0)[0], (*uParam1)[0], -1781.631f, -404.57f, 156.708f, 0f, 0f, 0f, 11f, 2f, 3f, 1, 534496, 1, 2, 0);
			func_53((*uParam0)[1], (*uParam1)[1], -1775.374f, -402.117f, 156.408f, 0f, 0f, 0f, 2f, 8f, 3f, 1, 534496, 1, 2, 0);
			func_53((*uParam0)[2], (*uParam1)[2], -1773.196f, -401.798f, 155.258f, 0f, 0f, 0f, 2f, 6f, 2f, 1, 534496, 1, 2, 0);
			func_55((*uParam0)[5], -1773.736f, -401.6385f, 154.9288f, 0f, 0f, 0f, 1f, 1f, 1f, "REPT_VOL_BLOCKING");
			PATHFIND::_0x19C7567D2F2287D6(uParam0[5], 7);
			func_54((*uParam0)[3], -1784.283f, -404.243f, 156.67f, 0f, 0f, 0f, 0.75f, 2.5f, 2.5f, "REPT_VOL_PLAYER_SEEN_1");
			func_54((*uParam0)[6], -1783.83f, -402.687f, 160.727f, 0f, 0f, 0f, 10f, 7f, 6f, "REPT_VOL_IGNORE_BREAKOUT");
			(*uParam0)[7] = VOLUME::_0x0EB78C2B156635B1(-1612834106, -1784.348f, -404.57f, 156.708f, 0f, 0f, 0f, 1f, 2f, 3f);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar0]))
		{
			func_56(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	switch (*iParam1)
	{
		case 1:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0xBCE668AAF83608BE(uParam0->f_173, -1756.639f, -403.6233f, 154.3729f, 0f, 0f, 10f, 20f, 20f, 5f);
					VOLUME::_0xBCE668AAF83608BE(uParam0->f_173, -1785.022f, -422.8229f, 154.3905f, 0f, 0f, 0.1f, 20f, 20f, 5f);
					break;
			}
			break;
	}
}

void func_18(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
	uParam0->f_7 = 2000;
}

void func_19(var uParam0)
{
	if (iLocal_14 == 0)
	{
		((*uParam0)[0 /*12*/])->f_7 = -1751465382;
	}
	else if (iLocal_14 == 2)
	{
		((*uParam0)[0 /*12*/])->f_7 = 548396801;
	}
}

void func_20(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iLocal_14)
	{
		case 0:
			((*uParam0)[2 /*32*/])->f_6 = { 0.02f, -1.51f, 0f };
			((*uParam0)[2 /*32*/])->f_9 = 270.3835f;
			func_57(&(((*uParam0)[2 /*32*/])->f_22));
			((*uParam0)[0 /*32*/])->f_6 = { 2.11f, -3.6f, 0f };
			((*uParam0)[0 /*32*/])->f_9 = 358.5339f;
			func_57(&(((*uParam0)[0 /*32*/])->f_22));
			((*uParam0)[1 /*32*/])->f_6 = { 3f, -3.45f, 0f };
			((*uParam0)[1 /*32*/])->f_9 = 358.5339f;
			func_57(&(((*uParam0)[1 /*32*/])->f_22));
			*uParam1 = { -1784.205f, -404.1717f, 155.4638f };
			*((*uParam2)[0 /*3*/]) = { -1775.225f, -400.4953f, 155.4706f };
			*((*uParam2)[1 /*3*/]) = { -1770.009f, -397.7302f, 155.0929f };
			*uParam3 = { -1778.943f, -400.5291f, 155.4879f };
			*uParam4 = 0f;
			break;
		case 1:
			((*uParam0)[2 /*32*/])->f_6 = { -2.13f, -1.23f, 0.01f };
			((*uParam0)[2 /*32*/])->f_9 = 263.8729f;
			((*uParam0)[3 /*32*/])->f_6 = { -1.65f, -1.25f, 0.01f };
			((*uParam0)[3 /*32*/])->f_9 = 263.8729f;
			((*uParam0)[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			((*uParam0)[0 /*32*/])->f_9 = 82.6332f;
			((*uParam0)[1 /*32*/])->f_6 = { 0f, 0f, 0f };
			((*uParam0)[1 /*32*/])->f_9 = 82.6332f;
			*uParam1 = { -285.8419f, 865.4821f, 120.2342f };
			*((*uParam2)[0 /*3*/]) = { -293.1871f, 835.0521f, 119.1021f };
			*((*uParam2)[1 /*3*/]) = { -293.1871f, 835.0521f, 119.1021f };
			*uParam3 = { -287.2625f, 867.8655f, 120.1367f };
			*uParam4 = 84.75f;
			break;
		case 2:
			((*uParam0)[2 /*32*/])->f_6 = { -0.06f, 2.19f, 1.26f };
			((*uParam0)[2 /*32*/])->f_9 = 275.4f;
			((*uParam0)[3 /*32*/])->f_6 = { -0.06f, 2.19f, 1.26f };
			((*uParam0)[3 /*32*/])->f_9 = 275.4f;
			((*uParam0)[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			((*uParam0)[0 /*32*/])->f_9 = 181.3992f;
			((*uParam0)[1 /*32*/])->f_6 = { 0f, 0f, 0f };
			((*uParam0)[1 /*32*/])->f_9 = 181.3992f;
			*uParam1 = { -260.9178f, 733.0137f, 118.1432f };
			*uParam3 = { -275.0332f, 727.3121f, 115.9876f };
			*((*uParam2)[0 /*3*/]) = { -251.8502f, 735.5443f, 117.1832f };
			*((*uParam2)[1 /*3*/]) = { -251.8502f, 735.5443f, 117.1832f };
			*uParam4 = -180f;
			break;
	}
}

void func_21(var uParam0, var uParam1, var uParam2)
{
	func_33(uParam0);
	func_58(uParam0, 1);
	func_59(uParam0, 1);
	func_60(uParam0, 1);
	func_61(uParam0, 1);
	func_62(uParam0, 0);
	func_63(uParam0, 1);
	func_64(uParam0, 1);
	func_65(uParam0, 0);
	func_66(uParam0, 1);
	func_58((*uParam1)[0 /*28*/], 1);
	func_67((*uParam1)[0 /*28*/], 0);
	func_59((*uParam1)[0 /*28*/], 1);
	func_66((*uParam1)[0 /*28*/], 1);
	func_68((*uParam1)[0 /*28*/], 0);
	func_60((*uParam1)[0 /*28*/], 0);
	func_69((*uParam1)[0 /*28*/], 0);
	func_58((*uParam1)[1 /*28*/], 1);
	func_67((*uParam1)[1 /*28*/], 0);
	func_59((*uParam1)[1 /*28*/], 1);
	func_66((*uParam1)[1 /*28*/], 1);
	func_68((*uParam1)[1 /*28*/], 0);
	func_60((*uParam1)[1 /*28*/], 0);
	func_69((*uParam1)[1 /*28*/], 0);
	func_58(uParam2, 1);
	func_67(uParam2, 0);
	func_59(uParam2, 0);
	func_66(uParam2, 1);
	func_68(uParam2, 1);
	func_60(uParam2, 0);
	func_69(uParam2, 1);
	func_58(uParam2, 1);
}

int func_22()
{
	int iVar0;

	switch (iLocal_583)
	{
		case 0:
			if (func_70(&Local_29))
			{
				func_71(&Local_231);
				func_72(&Local_231);
				func_19(&Local_16);
				func_73(&Local_16);
				func_74(&Local_497, &uLocal_360);
				func_75(&Local_223);
				func_76(&Local_918);
				if (iLocal_14 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("p_chair02x"), false);
					WEAPON::_0x72D4CB5DB927009C(joaat("weapon_shotgun_doublebarrel"), -1, 0);
					TASK::REQUEST_WAYPOINT_RECORDING("re_peeping_tom_str");
				}
				if (iLocal_14 == 1)
				{
					STREAMING::REQUEST_MODEL(1707504472, false);
				}
				iLocal_583 = 1;
			}
			break;
		case 1:
			if (!func_77(&uLocal_582, cLocal_15))
			{
				return 0;
			}
			if (!func_78(&uLocal_360))
			{
				return 0;
			}
			if (!func_79(&Local_16))
			{
				return 0;
			}
			if (iLocal_14 == 0)
			{
				if (!WEAPON::_0xFF07CF465F48B830(joaat("weapon_shotgun_doublebarrel")))
				{
					return 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_chair02x")))
				{
					return 0;
				}
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_peeping_tom_str"))
				{
					return 0;
				}
			}
			if (iLocal_14 == 1)
			{
				if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PEEPING_TOM"))
				{
					return 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(1707504472))
				{
					return 0;
				}
			}
			if (!func_80(&Local_231))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if ((Local_231[iVar0 /*32*/])->f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED((Local_231[iVar0 /*32*/])->f_1))
					{
						return 0;
					}
				}
				iVar0++;
			}
			if (!ANIMSCENE::_0x477122B8D05E7968(Local_223, 1, 0))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_23(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_81(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (fVar3 < fVar0)
	{
		return 0;
	}
	return 1;
}

int func_24(int iParam0, int iParam1)
{
	switch (iLocal_914)
	{
		case 0:
			if (!func_82(&Local_29, &uLocal_777, &Local_231, 1, 1, 1, iParam0, iParam1))
			{
				return 0;
			}
			iLocal_914 = 1;
			break;
		case 1:
			if (!func_83(&uLocal_777, &Local_231, &uLocal_600, 1, 1, iParam0, iParam1))
			{
				return 0;
			}
			iLocal_914 = 6;
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_25()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_40(&(uLocal_600[iVar0]), 0, 1))
		{
			PED::_0x5C3C55EAAD19915F(&(uLocal_600[iVar0]), func_84(iLocal_14, iVar0));
			PED::SET_PED_CONFIG_FLAG(&(uLocal_600[iVar0]), 146, true);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_600[iVar0]), 355, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_600[iVar0]), true, true);
		}
		iVar0++;
	}
	func_85(&(uLocal_600[0]), &Local_29, 0);
	func_85(&(uLocal_600[1]), &Local_29, 0);
	if (iLocal_14 == 0)
	{
		Local_29.f_120++;
	}
}

int func_26(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam8 && ENTITY::DOES_ENTITY_EXIST(((*uParam3)[iVar0 /*12*/])->f_8))
		{
		}
		else if (((*uParam3)[iVar0 /*12*/])->f_7 != 0 && !func_86(((*uParam3)[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam3)[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if (((*uParam3)[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = ((*uParam3)[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(((*uParam3)[iVar8 /*12*/])->f_8, *((*uParam3)[iVar0 /*12*/])) };
					if (func_86(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam3)[iVar0 /*12*/])->f_8, ((*uParam3)[iVar8 /*12*/])->f_8, 0, *((*uParam3)[iVar0 /*12*/]), ((*uParam3)[iVar0 /*12*/])->f_4, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				else
				{
					if (!func_86(((*uParam3)[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *((*uParam3)[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *((*uParam3)[iVar0 /*12*/]) };
					}
					if (!func_86(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						func_87(&vVar5, ((*uParam3)[iVar0 /*12*/])->f_10);
					}
					if (func_86(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_88(((*uParam3)[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, ((*uParam3)[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { ((*uParam3)[iVar0 /*12*/])->f_4 };
					}
					if (func_86(((*uParam3)[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_89((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION(((*uParam3)[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_86(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						if (((*uParam3)[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29(((*uParam3)[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (func_86(((*uParam3)[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam3)[iVar0 /*12*/])->f_8, true);
				}
				if (func_86(((*uParam3)[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE(((*uParam3)[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(((*uParam3)[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS(((*uParam3)[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9(((*uParam3)[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS(((*uParam3)[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_27(int iParam0, var uParam1)
{
	func_91((*uParam1)[0 /*17*/], func_90(7), "", -163964935, 0, 0, 0, 1, 0);
	func_91((*uParam1)[1 /*17*/], func_90(10), "", 648122183, 0, 0, 0, 1, 0);
	func_92((*uParam1)[0 /*17*/], 0, 0);
}

void func_28()
{
	vector3 vVar0;

	vVar0 = { Local_29.f_51 };
	switch (iLocal_14)
	{
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223, -262.63f, 734.317f, 117.177f, 0f, 0f, 110f, 2);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223, -291.671f, 866.743f, 120.138f, 0f, 0f, 79.247f, 2);
			break;
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223, vVar0, 0f, 0f, fLocal_535, 2);
			break;
	}
	if (func_40(&(uLocal_600[0]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223, func_93(0), &(uLocal_600[0]), 0);
	}
	if (func_40(&(uLocal_600[1]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223, func_93(1), &(uLocal_600[1]), 0);
	}
	ANIMSCENE::START_ANIM_SCENE(Local_223);
}

int func_29(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_94(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_95(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_96(&(uParam0->f_5));
			}
			func_97(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_98(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_99(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_100(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_101(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_102(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_49(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_103(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((iParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_30()
{
	var uVar0;

	if (!Local_29.f_46)
	{
		if (func_104(&uLocal_600, &(Local_29.f_5), &iLocal_650, &uLocal_597, 0, 1, 1))
		{
			Local_29.f_46 = 1;
			if (func_105())
			{
				func_106(&iLocal_591, &vLocal_536);
			}
			else
			{
				func_107(&iLocal_591, &vLocal_536);
			}
			switch (iLocal_650)
			{
				case 8:
					break;
				default:
					func_108(&(uLocal_600[0]), 0);
					func_108(&(uLocal_600[1]), 0);
					break;
			}
			iLocal_644[0] = 1;
			iLocal_644[1] = 1;
			func_109(8);
			func_110();
			func_111(uLocal_605[0]);
			func_112(&((Local_939[0 /*75*/])->f_21), 0, 0);
			func_112(&((Local_939[1 /*75*/])->f_21), 0, 0);
			func_113(&iLocal_915, 12);
			func_38(&(uLocal_620[7]));
			if (iLocal_584 < 5)
			{
				func_114(&iLocal_584, 13);
			}
			else
			{
				func_114(&iLocal_584, 11);
			}
		}
	}
	if (iLocal_584 == 11)
	{
		if (!func_115(131072))
		{
			if (func_104(&uLocal_600, &uLocal_708, &uVar0, &uLocal_598, 2, 3, 1))
			{
				func_116();
				func_109(131072);
			}
			else if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(2044016570, vLocal_532, 5f))
			{
				func_116();
				func_109(131072);
			}
			else if (iLocal_14 == 0 || iLocal_14 == 1)
			{
				if (func_117(vLocal_532, 1) < 5f)
				{
					if (func_118(&(uLocal_600[0]), Global_35) || func_118(&(uLocal_600[1]), Global_35))
					{
						func_116();
						func_109(131072);
					}
				}
			}
		}
	}
}

int func_31()
{
	bool bVar0;

	if (iLocal_584 > 2)
	{
		func_119(!func_115(16384));
		func_120(0, &iLocal_916, 536870912);
		func_120(1, &iLocal_917, 1073741824);
	}
	switch (iLocal_584)
	{
		case 0:
			func_114(&iLocal_584, 1);
			break;
		case 1:
			if (func_121())
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_223, "pblIdles"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblIdles", true);
				}
				else
				{
					func_114(&iLocal_584, 2);
				}
			}
			break;
		case 2:
			func_122();
			if (func_124(&Local_29, 2f, 1114636288, func_123(), 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				func_100(&(Local_29.f_121));
				func_114(&iLocal_584, 3);
			}
			break;
		case 3:
			if (func_122())
			{
				func_114(&iLocal_584, 4);
			}
			break;
		case 4:
			func_125();
			if (func_24(2, 3))
			{
				if (func_126())
				{
					func_127();
					func_128();
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_223.f_1, "pblIdles"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223.f_1, "pblIdles", true);
						func_114(&iLocal_584, 5);
					}
				}
			}
			break;
		case 5:
			if ((!MAP::DOES_BLIP_EXIST(&(uLocal_605[0])) && !func_115(64)) && func_129(Global_35, &(uLocal_600[0]), 1, 10f, 0))
			{
				func_109(64);
				func_130(vLocal_532, uLocal_605[0], -89429847, 0, 0, 0);
			}
			func_125();
			func_131();
			if (func_132())
			{
				func_133(&(uLocal_600[0]), &(Local_29.f_121));
				func_133(&(uLocal_600[1]), &(Local_29.f_121));
				func_134(&(uLocal_600[2]), &(Local_29.f_121));
				func_100(&(Local_29.f_121));
				func_60(&(Local_29.f_5), 0);
				func_114(&iLocal_584, 10);
			}
			break;
		case 10:
			func_135();
			if (iLocal_916 >= 10 && iLocal_917 >= 10)
			{
				bVar0 = true;
			}
			if ((ENTITY::IS_ENTITY_DEAD(&(uLocal_600[0])) || func_136(&(uLocal_600[0]), vLocal_532, 1) > 4f) && (ENTITY::IS_ENTITY_DEAD(&(uLocal_600[1])) || func_136(&(uLocal_600[1]), vLocal_532, 1) > 4f))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_38(&(uLocal_620[7]));
				func_114(&iLocal_584, 11);
			}
			break;
		case 11:
			func_137();
			func_138();
			func_139();
			func_140();
			func_135();
			func_141();
			func_131();
			break;
		case 13:
			func_137();
			func_138();
			func_131();
			if (func_141())
			{
				Local_29.f_44 = Local_29.f_48;
				return 1;
			}
			break;
	}
	return 0;
}

int func_32(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_142())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_143(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_49(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_49(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_49(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_144(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_144(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

void func_33(var uParam0)
{
	func_58(uParam0, 0);
	func_60(uParam0, 0);
	func_68(uParam0, 1);
	func_66(uParam0, 1);
	func_64(uParam0, 0);
	func_65(uParam0, 1);
	func_145(uParam0, 1, 1, 1);
}

var func_34(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_146(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_147(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_146(sVar0, iParam1, 0, 0, 1, 1);
}

void func_35()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<31> Var9;

	if (iLocal_14 != 2)
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_223.f_1))
	{
		return;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_223.f_1, 0))
	{
		return;
	}
	vVar0 = { -262.63f, 734.317f, 117.177f };
	vVar3 = { 0f, 0f, 110f };
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_600[2]), Local_223.f_1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_600[2]), &(Local_497[9 /*2*/]), (Local_497[9 /*2*/])->f_1, 1))
			{
				iVar7 = 9;
				iVar8 = 133;
				fVar6 = ENTITY::_0x627520389E288A73(&(uLocal_600[2]), &(Local_497[9 /*2*/]), (Local_497[9 /*2*/])->f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_600[2]), &(Local_497[11 /*2*/]), (Local_497[11 /*2*/])->f_1, 1))
			{
				iVar7 = 11;
				iVar8 = 134;
				fVar6 = ENTITY::_0x627520389E288A73(&(uLocal_600[2]), &(Local_497[11 /*2*/]), (Local_497[11 /*2*/])->f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_600[2]), &(Local_497[13 /*2*/]), (Local_497[13 /*2*/])->f_1, 1))
			{
				iVar7 = 13;
				iVar8 = 134;
				fVar6 = ENTITY::_0x627520389E288A73(&(uLocal_600[2]), &(Local_497[13 /*2*/]), (Local_497[13 /*2*/])->f_1);
			}
			else
			{
				iVar7 = 9;
				iVar8 = 133;
				fVar6 = 0f;
			}
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_600[2]), false, false);
			TASK::TASK_PLAY_ANIM_ADVANCED(&(uLocal_600[2]), &(Local_497[iVar7 /*2*/]), (Local_497[iVar7 /*2*/])->f_1, vVar0, vVar3, 16f, -8f, -1, iVar8, fVar6, 2, 17317919, 0);
			PED::SET_PED_KEEP_TASK(&(uLocal_600[2]), true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[3])))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_600[3]), Local_223.f_1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_600[3]), &(Local_497[10 /*2*/]), (Local_497[10 /*2*/])->f_1, 1))
			{
				iVar7 = 10;
				iVar8 = 133;
				fVar6 = ENTITY::_0x627520389E288A73(&(uLocal_600[3]), &(Local_497[10 /*2*/]), (Local_497[10 /*2*/])->f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_600[3]), &(Local_497[12 /*2*/]), (Local_497[12 /*2*/])->f_1, 1))
			{
				iVar7 = 12;
				iVar8 = 134;
				fVar6 = ENTITY::_0x627520389E288A73(&(uLocal_600[3]), &(Local_497[12 /*2*/]), (Local_497[12 /*2*/])->f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_600[3]), &(Local_497[14 /*2*/]), (Local_497[14 /*2*/])->f_1, 1))
			{
				iVar7 = 14;
				iVar8 = 134;
				fVar6 = ENTITY::_0x627520389E288A73(&(uLocal_600[3]), &(Local_497[14 /*2*/]), (Local_497[14 /*2*/])->f_1);
			}
			else
			{
				iVar7 = 10;
				iVar8 = 133;
				fVar6 = 0f;
			}
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_600[3]), false, false);
			TASK::TASK_PLAY_ANIM_ADVANCED(&(uLocal_600[3]), &(Local_497[iVar7 /*2*/]), (Local_497[iVar7 /*2*/])->f_1, vVar0, vVar3, 16f, -8f, -1, iVar8, fVar6, 2, 17317919, 0);
			PED::SET_PED_KEEP_TASK(&(uLocal_600[3]), true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_16[0 /*12*/])->f_8))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1((Local_16[0 /*12*/])->f_8, Local_223.f_1))
		{
			Var9.f_4 = 1065353216;
			Var9.f_5 = 1065353216;
			Var9.f_9 = 1065353216;
			Var9.f_10 = 1065353216;
			Var9.f_14 = 1065353216;
			Var9.f_15 = 1065353216;
			Var9.f_17 = 1040187392;
			Var9.f_18 = 1040187392;
			Var9.f_19 = -1;
			Var9.f_26 = -1082130432;
			Var9 = 1;
			Var9.f_27 = { vVar0 };
			Var9.f_30 = { vVar3 };
			Var9.f_17 = 16f;
			Var9.f_22 = 1;
			Var9.f_1 = &Local_497[16 /*2*/];
			if (func_115(262144))
			{
				Var9.f_2 = (Local_497[16 /*2*/])->f_1;
				Var9.f_20 = 262;
			}
			else
			{
				Var9.f_2 = (Local_497[15 /*2*/])->f_1;
				Var9.f_20 = 261;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM((Local_16[0 /*12*/])->f_8, Var9.f_1, Var9.f_2, 1))
			{
				Var9.f_3 = ENTITY::_0x627520389E288A73((Local_16[0 /*12*/])->f_8, Var9.f_1, Var9.f_2);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED((Local_16[0 /*12*/])->f_8))
			{
				ENTITY::DETACH_ENTITY((Local_16[0 /*12*/])->f_8, true, true);
			}
			TASK::PLAY_ENTITY_SCRIPTED_ANIM((Local_16[0 /*12*/])->f_8, &Var9);
			if (!ENTITY::_0x0B7CB1300CBFE19C((Local_16[0 /*12*/])->f_8, 1))
			{
				OBJECT::DELETE_OBJECT(&((Local_16[0 /*12*/])->f_8));
			}
		}
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0[iVar0]))
		{
			if (bParam1)
			{
			}
			PED::SET_PED_CONFIG_FLAG(uParam0[iVar0], 448, !bParam1);
		}
		iVar0++;
	}
}

void func_37(var uParam0, var uParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_0x43F867EF5C463A53(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

void func_38(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_39(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

bool func_40(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_148(iParam0, iParam1);
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_149(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_1;
	}
	return 0;
}

int func_42()
{
	return Global_1310750->f_16071;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_150(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_1 = iParam2;
}

int func_44()
{
	if (func_115(536870912) || func_115(1073741824))
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_151(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_152(uParam0->f_3, 524288);
		}
	}
	if (func_40(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (uParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_40(uParam1[iVar0], 0, 0))
			{
				func_153(uParam1[iVar0], bVar3);
				if (func_154(uParam0, (*uParam1)[iVar0]))
				{
					func_155((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_40(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], false, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], false, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_157(uParam1[iVar0], 1073741824, func_156(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_158(uParam0);
	}
	func_159(uParam0);
	if (!uParam0->f_186)
	{
		func_94(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_160(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_161(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

int func_46(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_162(iVar0))
	{
		return 0;
	}
	if (func_163(iVar0, 1) || func_163(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_164(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_165(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_98(iParam0, 128))
			{
				if (!func_166(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_81(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_167(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_88(*uParam1))
				{
					return func_168(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_169(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_4(Param4.f_2, 8))
				{
					func_165(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_171(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_172(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_98(iParam0, 128))
			{
				if (!func_173(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_168(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_81(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_170(uParam1))
					{
						return func_168(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_174(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_165(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_168(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_34("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_34("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_48(var uParam0, int iParam1)
{
	if (func_49(iParam1, 256))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_172) || func_176(iParam1, func_175(uParam0), &(uParam0->f_172)))
		{
			if (func_40(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_49(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_50(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_178(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_49(uParam0->f_3, 1) && !func_49(uParam0->f_3, 32))
	{
		func_178(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_49(uParam0->f_3, 2) && !func_49(uParam0->f_3, 32))
	{
		func_178(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_179(uParam0->f_171, 1);
	}
	if (func_49(uParam0->f_3, 1))
	{
		func_178(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_180(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_51(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_52(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_53(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_181(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_54(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_182(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_55(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, 0, 15);
		}
	}
}

void func_54(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_55(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, sParam10);
}

void func_56(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_57(var uParam0)
{
	func_183(uParam0, 2);
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 16384);
	}
	else
	{
		func_97(&(uParam0->f_1), 16384);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 2);
	}
	else
	{
		func_97(&(uParam0->f_1), 2);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 2048);
	}
	else
	{
		func_97(&(uParam0->f_1), 2048);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_97(uParam0, 1024);
	}
	else
	{
		func_184(uParam0, 1024);
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 1024);
	}
	else
	{
		func_97(&(uParam0->f_1), 1024);
	}
}

void func_63(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 1);
	}
	else
	{
		func_97(&(uParam0->f_1), 1);
	}
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 128);
	}
	else
	{
		func_97(&(uParam0->f_1), 128);
	}
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_97(uParam0, 256);
	}
	else
	{
		func_184(uParam0, 256);
	}
}

void func_66(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_97(uParam0, 16);
	}
	else
	{
		func_184(uParam0, 67108864);
		func_184(uParam0, 16);
	}
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 8);
	}
	else
	{
		func_97(&(uParam0->f_1), 8);
	}
}

void func_68(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 256);
	}
	else
	{
		func_97(&(uParam0->f_1), 256);
	}
}

void func_69(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_1), 4);
	}
	else
	{
		func_97(&(uParam0->f_1), 4);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_185(uParam0->f_3);
	iVar1 = func_186(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			((*uParam0)[0 /*32*/])->f_1 = -546133941;
			(*uParam0)[0 /*32*/] = 4;
			StringCopy(&(((*uParam0)[0 /*32*/])->f_23), "0925_A_M_M_Civ_Poor_White_AVOID_08", 64);
			((*uParam0)[0 /*32*/])->f_3 = -2101093034;
			((*uParam0)[1 /*32*/])->f_1 = -546133941;
			(*uParam0)[1 /*32*/] = 4;
			StringCopy(&(((*uParam0)[1 /*32*/])->f_23), "0924_A_M_M_Civ_Poor_White_AVOID_07", 64);
			((*uParam0)[1 /*32*/])->f_3 = 1906981667;
			((*uParam0)[2 /*32*/])->f_1 = 533829074;
			(*uParam0)[2 /*32*/] = 5;
			StringCopy(&(((*uParam0)[2 /*32*/])->f_23), "PEEPED_WOMAN", 64);
			((*uParam0)[2 /*32*/])->f_3 = 1149397788;
			break;
		case 2:
			((*uParam0)[0 /*32*/])->f_1 = -546133941;
			(*uParam0)[0 /*32*/] = 4;
			StringCopy(&(((*uParam0)[0 /*32*/])->f_23), "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19", 64);
			((*uParam0)[0 /*32*/])->f_3 = 681302568;
			((*uParam0)[1 /*32*/])->f_1 = -546133941;
			(*uParam0)[1 /*32*/] = 4;
			StringCopy(&(((*uParam0)[1 /*32*/])->f_23), "0643_A_M_M_Poor_White_02", 64);
			((*uParam0)[1 /*32*/])->f_3 = -1426399484;
			((*uParam0)[2 /*32*/])->f_1 = -546133941;
			(*uParam0)[2 /*32*/] = 4;
			StringCopy(&(((*uParam0)[2 /*32*/])->f_23), "OPIUM_MAN", 64);
			((*uParam0)[2 /*32*/])->f_3 = 787636659;
			((*uParam0)[3 /*32*/])->f_1 = 533829074;
			(*uParam0)[3 /*32*/] = 5;
			StringCopy(&(((*uParam0)[3 /*32*/])->f_23), "OPIUM_WOMAN", 64);
			((*uParam0)[3 /*32*/])->f_3 = -332119951;
			break;
		case 1:
			((*uParam0)[0 /*32*/])->f_1 = -546133941;
			(*uParam0)[0 /*32*/] = 4;
			StringCopy(&(((*uParam0)[0 /*32*/])->f_23), "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
			((*uParam0)[0 /*32*/])->f_3 = -986147997;
			((*uParam0)[1 /*32*/])->f_1 = -546133941;
			(*uParam0)[1 /*32*/] = 4;
			StringCopy(&(((*uParam0)[1 /*32*/])->f_23), "0816_A_M_M_ValLaborer_01_WHITE_01", 64);
			((*uParam0)[1 /*32*/])->f_3 = 912389556;
			((*uParam0)[2 /*32*/])->f_1 = -546133941;
			(*uParam0)[2 /*32*/] = 4;
			StringCopy(&(((*uParam0)[2 /*32*/])->f_23), "SPANKED_COWBOY", 64);
			((*uParam0)[2 /*32*/])->f_3 = 2135582760;
			((*uParam0)[3 /*32*/])->f_1 = 533829074;
			(*uParam0)[3 /*32*/] = 5;
			StringCopy(&(((*uParam0)[3 /*32*/])->f_23), "SPANKING_WIFE", 64);
			((*uParam0)[3 /*32*/])->f_3 = 1883654295;
			break;
	}
}

void func_72(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_187(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_187(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_73(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL(((*uParam0)[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

void func_74(var uParam0, var uParam1)
{
	if (iLocal_14 == 0)
	{
		(*uParam0)[0 /*2*/] = "script_re@peep_tom@topless_woman";
		((*uParam0)[0 /*2*/])->f_1 = "peepers_breakout_left_peeper01";
		(*uParam0)[1 /*2*/] = "script_re@peep_tom@topless_woman";
		((*uParam0)[1 /*2*/])->f_1 = "peepers_breakout_left_peeper02";
		(*uParam0)[2 /*2*/] = "script_re@peep_tom@topless_woman";
		((*uParam0)[2 /*2*/])->f_1 = "PEEPERS_BREAKOUT_RIGHT_ALT_PEEPER01";
		(*uParam0)[3 /*2*/] = "script_re@peep_tom@topless_woman";
		((*uParam0)[3 /*2*/])->f_1 = "PEEPERS_BREAKOUT_RIGHT_ALT_PEEPER02";
	}
	else if (iLocal_14 == 1)
	{
		(*uParam0)[0 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[0 /*2*/])->f_1 = "peepers_breakout_left_peeper01";
		(*uParam0)[1 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[1 /*2*/])->f_1 = "peepers_breakout_left_peeper02";
		(*uParam0)[2 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[2 /*2*/])->f_1 = "peepers_breakout_right_peeper01";
		(*uParam0)[3 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[3 /*2*/])->f_1 = "peepers_breakout_right_peeper02";
		(*uParam0)[4 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[4 /*2*/])->f_1 = "spanking_breakout_cowboy";
		(*uParam0)[5 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[5 /*2*/])->f_1 = "spanking_breakout_female";
		(*uParam0)[6 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[6 /*2*/])->f_1 = "spanking_breakout_curtains";
		(*uParam0)[7 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[7 /*2*/])->f_1 = "spanking_breakout_cig";
		(*uParam0)[8 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		((*uParam0)[8 /*2*/])->f_1 = "SPANKING_IDLE_CURTAINS";
	}
	else if (iLocal_14 == 2)
	{
		(*uParam0)[0 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[0 /*2*/])->f_1 = "peepers_breakout_left_peeper01";
		(*uParam0)[1 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[1 /*2*/])->f_1 = "peepers_breakout_left_peeper02";
		(*uParam0)[2 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[2 /*2*/])->f_1 = "peepers_breakout_right_peeper01";
		(*uParam0)[3 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[3 /*2*/])->f_1 = "peepers_breakout_right_peeper02";
		(*uParam0)[9 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[9 /*2*/])->f_1 = "SMOKING_IDLE_MALE";
		(*uParam0)[10 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[10 /*2*/])->f_1 = "SMOKING_IDLE_FEMALE";
		(*uParam0)[11 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[11 /*2*/])->f_1 = "SMOKING_EXIT_MALE";
		(*uParam0)[12 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[12 /*2*/])->f_1 = "SMOKING_EXIT_FEMALE";
		(*uParam0)[13 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[13 /*2*/])->f_1 = "SMOKING_EXIT_IDLE_MALE";
		(*uParam0)[14 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[14 /*2*/])->f_1 = "SMOKING_EXIT_IDLE_FEMALE";
		(*uParam0)[15 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[15 /*2*/])->f_1 = "SMOKING_IDLE_PIPE";
		(*uParam0)[16 /*2*/] = "script_re@peep_tom@smoking_opium";
		((*uParam0)[16 /*2*/])->f_1 = "SMOKING_EXIT_PIPE";
	}
	func_188(uParam0[0 /*2*/], uParam1);
}

void func_75(var uParam0)
{
	switch (iLocal_14)
	{
		case 2:
			uParam0->f_4 = "script@beat@town@peepingTom@opiumPeepers";
			uParam0->f_5 = "script@beat@town@peepingTom@opiumScene";
			break;
		case 1:
			uParam0->f_4 = "script@beat@town@peepingTom@spankPeepers";
			uParam0->f_5 = "script@beat@town@peepingTom@spankScene";
			break;
		case 0:
			uParam0->f_4 = "script@beat@town@peepingTom@preenPeepers";
			uParam0->f_5 = "script@beat@town@peepingTom@preenScene";
			break;
	}
	*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_4, 0, "pblIdles", false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		}
	}
}

void func_76(var uParam0)
{
	*uParam0 = { -1784.206f, -400.6368f, 156.4032f };
	uParam0->f_3 = { -1784.186f, -405.589f, 156.9501f };
	uParam0->f_6 = joaat("weapon_shotgun_doublebarrel");
	uParam0->f_7 = 20f;
	uParam0->f_12 = 1;
	uParam0->f_15 = 1;
	uParam0->f_11 = Global_35;
}

int func_77(var uParam0, char* sParam1)
{
	return 1;
}

int func_78(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

int func_79(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*12*/])->f_7))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_80(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_189((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

void func_81(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_190(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_49(iParam0, 1))
			{
				if (func_98(iParam0, 2))
				{
				}
			}
			func_191(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_192(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_192(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_143(iParam0))
	{
		*fParam2 = 40000f;
	}
}

int func_82(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar6;

	if (!func_193(uParam2))
	{
		return 0;
	}
	if (iParam6 < 0 || iParam6 >= *uParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *uParam2)
	{
		iParam7 = (*uParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (((*uParam2)[iVar0 /*32*/])->f_1 != 0)
		{
			if (iParam3 && !func_194(&(((*uParam2)[iVar0 /*32*/])->f_22)))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, ((*uParam2)[iVar0 /*32*/])->f_6) };
				uVar1 = func_89((uParam0->f_51.f_3 + ((*uParam2)[iVar0 /*32*/])->f_9));
			}
			else
			{
				vVar3 = { ((*uParam2)[iVar0 /*32*/])->f_6 };
				uVar1 = func_89(((*uParam2)[iVar0 /*32*/])->f_9);
			}
			if (!func_195(&(((*uParam2)[iVar0 /*32*/])->f_22)))
			{
				func_196(&vVar3, 1, 10, 0);
			}
			if (((*uParam2)[iVar0 /*32*/])->f_12 != 0)
			{
				if (!((*uParam2)[iVar0 /*32*/])->f_19 && !func_194(&(((*uParam2)[iVar0 /*32*/])->f_22)))
				{
					vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, ((*uParam2)[iVar0 /*32*/])->f_15) };
					uVar2 = func_89((uParam0->f_51.f_3 + ((*uParam2)[iVar0 /*32*/])->f_18));
					func_196(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { ((*uParam2)[iVar0 /*32*/])->f_15 };
					uVar2 = func_89(((*uParam2)[iVar0 /*32*/])->f_18);
				}
				func_197(uParam1, iVar0 + 15, ((*uParam2)[iVar0 /*32*/])->f_12, vVar6, uVar2, bParam4, bParam5, 0, 1, 0);
			}
			func_197(uParam1, iVar0, ((*uParam2)[iVar0 /*32*/])->f_1, vVar3, uVar1, bParam4, bParam5, ((*uParam2)[iVar0 /*32*/])->f_2, 1, ((*uParam2)[iVar0 /*32*/])->f_5);
		}
		iVar0++;
	}
	return 1;
}

int func_83(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (*uParam1 != *uParam2)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= *uParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *uParam1)
	{
		iParam6 = (*uParam1 - 1);
	}
	if (func_198(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2[iVar0]) && ((*uParam1)[iVar0 /*32*/])->f_1 != 0)
			{
				(*uParam2)[iVar0] = func_199(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(uParam2[iVar0]))
				{
					if (((*uParam1)[iVar0 /*32*/])->f_12 != 0)
					{
						((*uParam1)[iVar0 /*32*/])->f_11 = func_199(uParam0, iVar0 + 15);
						func_200(&(((*uParam1)[iVar0 /*32*/])->f_11), (*uParam1)[iVar0 /*32*/], bParam3, 1);
						ENTITY::_SET_ENTITY_HEALTH(((*uParam1)[iVar0 /*32*/])->f_11, 400, 0);
						PED::_0x283978A15512B2FE(((*uParam1)[iVar0 /*32*/])->f_11, 1);
						PED::_0x1902C4CFCC5BE57C(((*uParam1)[iVar0 /*32*/])->f_11, 1268180497);
						PED::_0xCC8CA3E88256E58F(((*uParam1)[iVar0 /*32*/])->f_11, 1, 1, 1, 1, 0);
						if (((*uParam1)[iVar0 /*32*/])->f_13)
						{
							PED::_SET_PED_ON_MOUNT(uParam2[iVar0], ((*uParam1)[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG(uParam2[iVar0], 307, true);
					}
					if (((*uParam1)[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1(uParam2[iVar0], ((*uParam1)[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(((*uParam1)[iVar0 /*32*/])->f_23)))
						{
							func_201(uParam2[iVar0], &(((*uParam1)[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (func_202(&(((*uParam1)[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_0xDFCE8CE9F3EBE93F(uParam2[iVar0]);
					}
					func_200((*uParam2)[iVar0], (*uParam1)[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		func_203(uParam0);
		return 1;
	}
	return 0;
}

char* func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "Default_Panic";
				case 1:
					return "Default_Panic";
				case 2:
					return "Default_Panic";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "Default_Panic";
				case 1:
					return "Default_Panic";
				case 2:
					return "Default_Panic";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "Default_Panic";
				case 1:
					return "Default_Panic";
				case 2:
					return "Default_Panic";
				default:
					break;
			}
			break;
	}
	return "Default_Panic";
}

int func_85(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_134(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

bool func_86(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_87(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_196(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

int func_88(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_89(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

char* func_90(int iParam0)
{
	if (func_204(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_91(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_205(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_206(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_207(iParam0->f_6, iParam0->f_5, 0);
			}
			func_208(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_209(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_92(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_210(iParam0, 13))
	{
		func_211(iParam0, 0);
	}
	else
	{
		func_212(iParam0, 0);
	}
	if (func_205(iParam0->f_6))
	{
		if (bParam2)
		{
			func_213(&(iParam0->f_6), 0, 1);
		}
	}
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pedPeeperA";
		case 1:
			return "pedPeeperB";
		case 2:
			return "pedVictim";
		case 3:
			return "pedVictim2";
		default:
			break;
	}
	return "INVALID_PED";
}

void func_94(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_214(uParam0) };
	iVar3 = func_160(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_95(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_96(var uParam0)
{
	func_68(uParam0, 1);
	func_215(uParam0, 20);
}

void func_97(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_98(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_99(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_177(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_216())
	{
		func_217(1);
	}
	func_218(iParam2, uParam0->f_43);
	func_219(iParam2, 0, 0, 0, 0);
	if (func_220(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_151(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_221(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_100(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_101(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_222())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_98(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_99(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_100(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (!func_223(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_224(uParam0, bVar0);
		func_225(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_226(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_99(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_100(&(uParam0->f_121));
		}
	}
}

int func_102(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_49(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_227())
			{
				fVar0 = 15f;
			}
		}
		if (func_228(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_229(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_228(uParam2, fVar1))
		{
			if (!func_230(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_231(uParam2->f_3, 2) && func_232(2))
		{
			return 0;
		}
		if (func_49(iParam0, 4194304) || func_49(iParam0, 33554432))
		{
			if (func_233(1))
			{
				return 0;
			}
		}
	}
	if (func_234(Global_35))
	{
		return 0;
	}
	if (func_235(0, 1, 1) && !func_236(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_49(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_237(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_229(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_238())
		{
			return 0;
		}
		iVar2 = func_239(func_3());
		if (func_240(iVar2))
		{
			if (func_241(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_242(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_243(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_103(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_244(uParam0->f_51))
	{
		func_245(uParam0->f_51, 0);
		fVar0 = func_246(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_247());
		fVar1 = func_156(!func_49(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_249(iVar2, func_248(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

int func_104(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_250(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_251(uParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_105()
{
	vector3 vVar0;

	switch (iLocal_14)
	{
		case 1:
			vVar0 = { -280.7759f, 864.9177f, 119.6622f };
			break;
		case 2:
			vVar0 = { -258.9949f, 727.1036f, 116.3725f };
			break;
		case 0:
			vVar0 = { -1784.333f, -405.4706f, 155.4812f };
			break;
	}
	if (func_252(vVar0, vLocal_532, Global_36))
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, var uParam1)
{
	func_183(iParam0, 32);
	switch (iLocal_14)
	{
		case 0:
			*((*uParam1)[0 /*3*/]) = { -1774.641f, -404.1791f, 155.4695f };
			*((*uParam1)[1 /*3*/]) = { -1773.69f, -391.0948f, 155.7128f };
			break;
		case 2:
			*((*uParam1)[0 /*3*/]) = { -251.9975f, 735.3788f, 117.1469f };
			*((*uParam1)[1 /*3*/]) = { -254.7075f, 757.2803f, 116.0289f };
			break;
		case 1:
			*((*uParam1)[0 /*3*/]) = { -288.2779f, 876.9728f, 119.7318f };
			*((*uParam1)[1 /*3*/]) = { -298.1447f, 875.8338f, 119.517f };
			break;
	}
}

void func_107(int iParam0, var uParam1)
{
	func_183(iParam0, 16);
	switch (iLocal_14)
	{
		case 0:
			*((*uParam1)[0 /*3*/]) = { -1791.483f, -404.6982f, 152.0737f };
			*((*uParam1)[1 /*3*/]) = { -1797.492f, -418.425f, 155.4626f };
			break;
		case 2:
			*((*uParam1)[0 /*3*/]) = { -272.4986f, 727.4485f, 116.1223f };
			*((*uParam1)[1 /*3*/]) = { -279.9165f, 742.4937f, 116.3102f };
			break;
		case 1:
			*((*uParam1)[0 /*3*/]) = { -292.1957f, 856.775f, 119.3069f };
			*((*uParam1)[1 /*3*/]) = { -304.7931f, 845.9597f, 118.5402f };
			break;
	}
}

void func_108(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_109(int iParam0)
{
	if (!func_115(iParam0))
	{
		func_183(&iLocal_591, iParam0);
	}
}

void func_110()
{
	if (!func_40(&(uLocal_600[0]), 0, 1) || !func_40(&(uLocal_600[1]), 0, 1))
	{
		return;
	}
	if (func_253(&(uLocal_600[0]), 1, 1) > func_253(&(uLocal_600[1]), 1, 1))
	{
		iLocal_594[0] = 0;
		iLocal_594[1] = 350;
	}
	else
	{
		iLocal_594[0] = 350;
		iLocal_594[1] = 0;
	}
}

void func_111(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_112(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_92((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

void func_113(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_114(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_115(int iParam0)
{
	return func_86(iLocal_591, iParam0);
}

void func_116()
{
	switch (iLocal_14)
	{
		case 1:
			if (func_254(Local_223.f_1, "pblIdles") || (func_254(Local_223.f_1, "pblExit") && func_255(Local_223.f_1, 0f, 0.6847f)))
			{
				bLocal_1299 = true;
				iLocal_587 = 3;
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223.f_1, "pblBreakout", true);
				func_109(524288);
				func_256(&iLocal_588, 4);
				func_114(&iLocal_584, 11);
			}
			break;
		case 2:
			bLocal_1299 = true;
			iLocal_587 = 3;
			func_256(&iLocal_588, 4);
			func_114(&iLocal_584, 11);
			break;
		case 0:
			bLocal_1299 = true;
			iLocal_587 = 3;
			func_256(&iLocal_588, 4);
			func_38(&(uLocal_620[7]));
			func_114(&iLocal_584, 11);
			break;
	}
}

float func_117(vector3 vParam0, bool bParam3)
{
	return func_136(Global_35, vParam0, bParam3);
}

int func_118(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_119(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_115(536870912))
	{
		iVar0 = func_257(uLocal_600[0], Local_939[0 /*75*/], 15f, &((Local_939[0 /*75*/])->f_21), &(Local_29.f_192), 0f, 1, 0, 0, iLocal_1240, 0, 0, 2, 1, -1082130432, 0);
	}
	if (!func_115(1073741824))
	{
		iVar1 = func_257(uLocal_600[1], Local_939[1 /*75*/], 15f, &((Local_939[1 /*75*/])->f_21), &(Local_29.f_192), 0f, 1, 0, 0, iLocal_1240, 0, 0, 2, 1, -1082130432, 0);
	}
	if (func_115(1))
	{
		return;
	}
	if ((func_258(Local_939[0 /*75*/]) && iVar0 != -1) || (func_258(Local_939[1 /*75*/]) && iVar1 != -1))
	{
		if (bParam0)
		{
			bLocal_647 = true;
			func_259();
		}
		func_261(Global_35, &(uLocal_600[0]), func_260(iLocal_14), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_112(&((Local_939[0 /*75*/])->f_21), 0, 0);
		func_112(&((Local_939[1 /*75*/])->f_21), 0, 0);
		func_111(uLocal_605[0]);
		func_109(1);
	}
}

void func_120(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_40(&(uLocal_600[iParam0]), 0, 0))
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (func_262(&(uLocal_600[0]), "RE_PT_AGGRO", 1067030938))
		{
			switch (iLocal_14)
			{
				case 0:
					func_183(&iLocal_592, 512);
					break;
				case 1:
					func_183(&iLocal_592, 2048);
					break;
				case 2:
					func_183(&iLocal_592, 262144);
					break;
			}
		}
	}
	if (&iLocal_644[iParam0])
	{
		switch (*uParam1)
		{
			case 0:
			case 1:
				func_263(vLocal_739[iParam0 /*3*/]);
				iLocal_644[iParam0] = 0;
				func_113(uParam1, 5);
				break;
			case 3:
			case 10:
			case 11:
				func_263(vLocal_739[iParam0 /*3*/]);
				iLocal_644[iParam0] = 0;
				func_113(uParam1, 8);
				break;
		}
	}
	switch (*uParam1)
	{
		case 0:
			TASK::_0x2E1D6D87346BB7D2(&(uLocal_600[iParam0]), Global_35, 0, 0);
			func_113(uParam1, 1);
			break;
		case 1:
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[iParam0]), -1931509438))
			{
				func_264(Local_223, func_93(iParam0), &(uLocal_600[iParam0]));
				if (iLocal_14 != 2)
				{
					PED::FORCE_PED_MOTION_STATE(&(uLocal_600[iParam0]), -668482597, false, 0, false);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, *(vLocal_536[1 /*3*/]), 1f, -1, 0.25f, true, 40000f);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				func_265(&(uLocal_600[iParam0]), &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(&(uLocal_600[iParam0]), true);
				func_113(uParam1, 10);
			}
			break;
		case 5:
			if (func_251(&(uLocal_600[iParam0]), 0, Local_651[iParam0 /*28*/], &uVar2, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432, -1, 0);
				func_265(&(uLocal_600[iParam0]), &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(&(uLocal_600[iParam0]), true);
				func_263(vLocal_752[iParam0 /*3*/]);
				func_113(uParam1, 11);
			}
			else if (func_267(iParam0))
			{
				if (ANIMSCENE::_0x25557E324489393C(Local_223) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_223, 0))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_223, "pblBreakoutL") && !ANIMSCENE::_0x1F0E401031E20146(Local_223, "pblBreakoutR"))
					{
						if (func_115(16))
						{
							if (iLocal_14 == 0)
							{
								func_109(268435456);
							}
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblBreakoutL", true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblBreakoutR", true);
						}
					}
				}
				else
				{
					iVar1 = func_268(iParam0, func_115(16));
					TASK::TASK_PLAY_ANIM(&(uLocal_600[iParam0]), &(Local_497[iVar1 /*2*/]), (Local_497[iVar1 /*2*/])->f_1, 8f, -16f, -1, 16384, 0, 0, 0, 0, 0, 0);
				}
				func_113(uParam1, 6);
			}
			break;
		case 6:
			if (func_262(&(uLocal_600[iParam0]), "bSeesPlayer", 1067030938))
			{
				func_108(&(uLocal_600[iParam0]), 0);
			}
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_600[0]), true) || PED::IS_PED_DEAD_OR_DYING(&(uLocal_600[1]), true))
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_600[iParam0]), 290, true);
				if (!iLocal_648)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[iParam0]), 865122202))
					{
						if (func_271(&(uLocal_600[iParam0]), func_269(), 291934926, 0, 1, &((Local_231[iParam0 /*32*/])->f_23), func_270(iParam0, iLocal_14, iLocal_590), 1))
						{
							iLocal_648 = 1;
						}
					}
				}
			}
			if (func_251(&(uLocal_600[iParam0]), 0, Local_651[iParam0 /*28*/], &uVar2, 0, 0) || (ANIMSCENE::_0x25557E324489393C(Local_223) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_600[iParam0]), Local_223)))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_115(268435456) && func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_532, 3, 384, 15f, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432, -1, 0);
				func_265(&(uLocal_600[iParam0]), &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(&(uLocal_600[iParam0]), true);
				func_263(vLocal_752[iParam0 /*3*/]);
				if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_600[0]), true) || PED::IS_PED_DEAD_OR_DYING(&(uLocal_600[1]), true))
				{
					if (!iLocal_648)
					{
						if (func_271(&(uLocal_600[iParam0]), func_269(), 291934926, 0, 1, &((Local_231[iParam0 /*32*/])->f_23), func_270(iParam0, iLocal_14, iLocal_590), 1))
						{
							iLocal_648 = 1;
						}
					}
				}
				func_113(uParam1, 7);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[iParam0]), -1931509438))
			{
				func_264(Local_223, func_93(iParam0), &(uLocal_600[iParam0]));
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FORCE_MOTION_STATE(0, -530524, false);
				if (func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, *(vLocal_536[0 /*3*/]), 2f, -1, 1f, 8193, 40000f);
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_532, 3, 384, 15f, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432, -1, 0);
				func_265(&(uLocal_600[iParam0]), &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(&(uLocal_600[iParam0]), true);
				func_263(vLocal_752[iParam0 /*3*/]);
				func_113(uParam1, 7);
			}
			break;
		case 7:
			if (func_272(vLocal_752[iParam0 /*3*/], 5f))
			{
				func_273(iParam0, iParam2, 33);
				func_113(uParam1, 12);
			}
			break;
		case 8:
			if (func_267(iParam0))
			{
				func_274(iParam0, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, func_84(iLocal_14, iParam0), 0.75f, 0, 4);
				if (func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432, -1, 0);
				func_265(&(uLocal_600[iParam0]), &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(&(uLocal_600[iParam0]), true);
				func_263(vLocal_752[iParam0 /*3*/]);
				func_113(uParam1, 11);
			}
			break;
		case 9:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_266(iParam0, 1))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432, -1, 0);
			func_265(&(uLocal_600[iParam0]), &iVar0, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(&(uLocal_600[iParam0]), true);
			func_263(vLocal_752[iParam0 /*3*/]);
			func_113(uParam1, 11);
			break;
		case 10:
			PED::SET_PED_RESET_FLAG(&(uLocal_600[iParam0]), 12, true);
			PED::SET_PED_RESET_FLAG(&(uLocal_600[iParam0]), 172, true);
			if (func_136(&(uLocal_600[iParam0]), vLocal_532, 1) > 20f || func_136(&(uLocal_600[iParam0]), *(vLocal_536[1 /*3*/]), 1) < 10f)
			{
				if (func_115(128))
				{
					func_273(iParam0, iParam2, 0);
				}
				else
				{
					func_273(iParam0, iParam2, 30);
				}
				func_113(uParam1, 12);
			}
			break;
		case 11:
			if (func_272(vLocal_752[iParam0 /*3*/], 5f))
			{
				func_273(iParam0, iParam2, 33);
				func_113(uParam1, 12);
			}
			break;
		case 12:
			break;
	}
}

int func_121()
{
	int iVar0;

	switch (iLocal_586)
	{
		case 0:
			iLocal_586 = 1;
			break;
		case 1:
			if (!ANIMSCENE::_0x477122B8D05E7968(Local_223, 1, 0))
			{
				return 0;
			}
			else
			{
				iLocal_586 = 2;
			}
			break;
		case 2:
			sLocal_546[0] = "pblIdles";
			sLocal_546[1] = "pblDialogue";
			sLocal_546[2] = "pblExitL";
			sLocal_546[3] = "pblExitR";
			sLocal_546[4] = "pblBreakoutL";
			sLocal_546[5] = "pblBreakoutR";
			sLocal_553[0] = "pblIdles";
			sLocal_553[1] = "pblExit";
			sLocal_553[2] = "pblBreakout";
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_546[iVar0])))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223, &(sLocal_546[iVar0]));
				}
				iVar0++;
			}
			iLocal_586 = 3;
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_546[iVar0])))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223, &(sLocal_546[iVar0])))
					{
						return 0;
					}
				}
				iVar0++;
			}
			iLocal_586 = 4;
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_122()
{
	switch (iLocal_1300)
	{
		case 0:
			if (iLocal_14 == 1)
			{
				iLocal_1300 = 1;
			}
			else
			{
				iLocal_1300 = 4;
			}
			break;
		case 1:
			iLocal_1301 = INTERIOR::GET_INTERIOR_AT_COORDS(-289.4923f, 865.9225f, 120.1366f);
			iLocal_1300 = 3;
			break;
		case 3:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1301))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_1301))
				{
					if (INTERIOR::_0xD56FF170710FC826(iLocal_1301, "val_res_a_int_peepcurtain"))
					{
						if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1301, "val_res_a_int_peepcurtain"))
						{
							INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1301, "val_res_a_int_peepcurtain", 0);
						}
						iLocal_1300 = 2;
					}
				}
			}
			else
			{
				iLocal_1300 = 1;
			}
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(975100514))
			{
				STREAMING::REQUEST_MODEL(975100514, false);
			}
			else if (iLocal_1302 == 0)
			{
				iLocal_1302 = ENTITY::_0x6F3068258A499E52(975100514, -286.4733f, 865.5103f, 120.869f, 5);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_1302))
			{
				iLocal_619 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_1302);
				iLocal_1300 = 4;
			}
			else
			{
				iLocal_1302 = ENTITY::_0x6F3068258A499E52(975100514, -286.4733f, 865.5103f, 120.869f, 5);
			}
			break;
		case 4:
			Local_223.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_223.f_5, 0, 0, false, true);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_223.f_5))
			{
				if (!ANIMSCENE::_0x477122B8D05E7968(Local_223.f_1, 1, 0))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_223.f_1);
					iLocal_1300 = 5;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_0x477122B8D05E7968(Local_223.f_1, 1, 0))
			{
				iLocal_1300 = 6;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

float func_123()
{
	switch (iLocal_14)
	{
		case 0:
			return 20f;
		case 1:
			return 35f;
		case 2:
			return 20f;
		default:
			break;
	}
	return 20f;
}

int func_124(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, int iParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_224(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_222())
	{
		bVar1 = true;
		fVar3 = func_156(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_225(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_225(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_226(&(uParam0->f_121), iParam4, fParam1))
		{
			func_100(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_160(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(iParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_99(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_100(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_160(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_125()
{
	if (func_115(8) || iLocal_584 < 5)
	{
		return;
	}
	switch (iLocal_14)
	{
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(1)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(2)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(4)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(8)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(16)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(32)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(64)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(128)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(256)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(512)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(1)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(2)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(4)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(8)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(16)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(64)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(128)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			break;
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(1)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(2)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(4)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(8)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(16)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(32)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[0]), func_275(64)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[1]), func_275(128)))
			{
				func_276(40789253, vLocal_532, 1);
			}
			break;
	}
}

int func_126()
{
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_223.f_1, 1, 0))
	{
		return 0;
	}
	else
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223.f_1, &(sLocal_553[0])))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223.f_1, &(sLocal_553[0]));
			return 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223.f_1, &(sLocal_553[1])))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223.f_1, &(sLocal_553[1]));
			return 0;
		}
		if (iLocal_14 == 1)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223.f_1, &(sLocal_553[2])))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223.f_1, &(sLocal_553[2]));
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_127()
{
	if (func_40(&(uLocal_600[2]), 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_600[2]), 253, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_600[2]), 301, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_600[2]), 1, true);
		func_277(&(uLocal_600[2]), 0);
		switch (iLocal_14)
		{
			case 2:
				func_278(&(uLocal_600[2]), 0, 1);
				break;
			case 0:
				PED::_0x5C3C55EAAD19915F(&(uLocal_600[2]), func_84(iLocal_14, 2));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(&(uLocal_600[2]), false);
				break;
		}
	}
	if (func_40(&(uLocal_600[3]), 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_600[3]), 253, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_600[3]), 301, true);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_600[3]), 1, true);
		func_277(&(uLocal_600[3]), 0);
	}
}

void func_128()
{
	vector3 vVar0;

	vVar0 = { Local_29.f_51 };
	switch (iLocal_14)
	{
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223.f_1, -262.63f, 734.317f, 117.177f, 0f, 0f, 110f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, "objPipe", (Local_16[0 /*12*/])->f_8, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223.f_1, -291.6873f, 866.289f, 120.1314f, 0f, 0f, fLocal_535, 2);
			break;
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223.f_1, vVar0, 0f, 0f, fLocal_535, 2);
			(Local_16[0 /*12*/])->f_8 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_shotgun_doublebarrel"), -1, Local_29.f_51 + Vector(0.1f, 0f, 0f), 1, 1065353216);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, "objGun", (Local_16[0 /*12*/])->f_8, 0);
			break;
	}
	if (func_40(&(uLocal_600[2]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, func_93(2), &(uLocal_600[2]), 0);
	}
	if (func_40(&(uLocal_600[3]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, func_93(3), &(uLocal_600[3]), 0);
	}
	ANIMSCENE::START_ANIM_SCENE(Local_223.f_1);
}

bool func_129(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_279(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_280(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_130(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::_0x554D9D53F696D002(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::_0x662D364ABF16DE2F(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

void func_131()
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_600[2])))
	{
		PED::SET_PED_RESET_FLAG(&(uLocal_600[2]), 258, true);
	}
	if (iLocal_14 != 0 && ENTITY::DOES_ENTITY_EXIST(&(uLocal_600[3])))
	{
		PED::SET_PED_RESET_FLAG(&(uLocal_600[3]), 258, true);
	}
}

int func_132()
{
	switch (iLocal_915)
	{
		case 0:
			func_113(&iLocal_915, 1);
			break;
		case 1:
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblDialogue", true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_223, "bPlayDialogue", true, false);
			func_113(&iLocal_915, 2);
			break;
		case 2:
			if (func_281() || func_115(1))
			{
				if (func_105())
				{
					func_106(&iLocal_591, &vLocal_536);
				}
				else
				{
					func_107(&iLocal_591, &vLocal_536);
				}
				func_113(&iLocal_915, 4);
			}
			else if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_223) > func_282(iLocal_14))
			{
				if (func_105() || iLocal_14 == 0)
				{
					func_106(&iLocal_591, &vLocal_536);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblExitR", true);
				}
				else
				{
					func_107(&iLocal_591, &vLocal_536);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblExitL", true);
				}
				func_38(&(uLocal_620[7]));
				func_109(16384);
				func_113(&iLocal_916, 3);
				func_113(&iLocal_917, 3);
				func_113(&iLocal_915, 3);
			}
			break;
		case 3:
			if (!func_283(Local_223))
			{
				func_113(&iLocal_915, 12);
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[0])))
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_600[0]), 290, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[1])))
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_600[1]), 290, true);
			}
			if (!func_284(&uLocal_736))
			{
				func_109(8);
				func_263(&uLocal_736);
			}
			else if (func_285(&uLocal_736) > fLocal_599)
			{
				func_113(&iLocal_915, 5);
			}
			break;
		case 5:
			if (func_105())
			{
				func_109(32);
			}
			else
			{
				func_109(16);
			}
			func_263(vLocal_739[0 /*3*/]);
			func_263(vLocal_739[1 /*3*/]);
			func_113(&iLocal_916, 5);
			func_113(&iLocal_917, 5);
			func_113(&iLocal_915, 12);
			break;
		case 12:
			return 1;
	}
	return 0;
}

int func_133(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			if (iParam0 == ((*uParam1)[iVar0 /*9*/])->f_6)
			{
				((*uParam1)[iVar0 /*9*/])->f_6 = 0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_134(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_135()
{
	if (func_115(512))
	{
		return;
	}
	else if (func_115(256))
	{
		if (func_286(-5f, 1, 0, 0))
		{
			func_274(0, 1);
			func_113(&iLocal_916, 9);
			func_113(&iLocal_917, 9);
			func_287(256);
			func_109(512);
		}
		return;
	}
	if (func_115(1))
	{
		if (!bLocal_647)
		{
			if (func_40(&(uLocal_600[0]), 0, 1))
			{
				TASK::_0x2E1D6D87346BB7D2(&(uLocal_600[0]), Global_35, 0, 0);
			}
			if (func_40(&(uLocal_600[1]), 0, 1))
			{
				TASK::_0x2E1D6D87346BB7D2(&(uLocal_600[1]), Global_35, 0, 0);
			}
			func_109(256);
		}
	}
	if (!func_115(1) && func_136(&(uLocal_600[0]), Local_29.f_51, 1) > 10f)
	{
		func_112(&((Local_939[0 /*75*/])->f_21), 0, 0);
		func_112(&((Local_939[1 /*75*/])->f_21), 0, 0);
		func_109(512);
	}
	if (func_115(8) || func_115(128))
	{
		return;
	}
	if (func_117(Local_29.f_51, 1) < 15f && func_286(-3f, 1, 0, 0))
	{
		if (func_129(&(uLocal_600[0]), Global_35, 1, 7f, 0))
		{
			func_109(128);
			func_271(&(uLocal_600[0]), func_288(0, iLocal_14, iLocal_590), 291934926, 0, 1, &((Local_231[0 /*32*/])->f_23), func_289(0, iLocal_14, iLocal_590), 1);
		}
		else if (func_129(&(uLocal_600[1]), Global_35, 1, 7f, 0))
		{
			func_109(128);
			func_271(&(uLocal_600[1]), func_288(1, iLocal_14, iLocal_590), 291934926, 0, 1, &((Local_231[1 /*32*/])->f_23), func_289(1, iLocal_14, iLocal_590), 1);
		}
	}
}

float func_136(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_137()
{
	int iVar0;
	int iVar1;

	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_588)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), -219817230))
					{
						func_256(&iLocal_588, 1);
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), -1140841175))
					{
						func_58(&uLocal_708, 0);
						if ((!ANIMSCENE::_0x25557E324489393C(Local_1241.f_2) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_1241.f_2, 0)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1241.f_2))
						{
							Local_918.f_11 = 0;
						}
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_918);
						func_290(1066055203, &(uLocal_600[2]), 1);
						if (ENTITY::DOES_ENTITY_EXIST((Local_16[0 /*12*/])->f_8))
						{
							WEAPON::_0x1A47699E8D533E8F(&((Local_16[0 /*12*/])->f_8), &(uLocal_600[2]), 752097756, 0);
						}
						if (func_117(vLocal_532, 1) < 2f)
						{
							if ((!ANIMSCENE::_0x25557E324489393C(Local_1241.f_2) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_1241.f_2, 0)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1241.f_2))
							{
								PED::_0x09171A6F8FDE5DC1(Global_35, -1784.262f, -403.5812f, 157.1804f, 1);
							}
						}
						iLocal_649 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-1905235087, -1784.146f, -403.6157f, 157.4285f, -1f, 15f, 15f, -1082130432, -1082130432, -1, -1);
						func_291(1343354387);
						func_109(1024);
						func_37(uLocal_620[0], uLocal_629[0]);
						func_37(uLocal_620[1], uLocal_629[1]);
						func_256(&iLocal_588, 3);
					}
					break;
				case 3:
					if (!ANIMSCENE::_0x25557E324489393C(Local_223.f_1) || ANIMSCENE::_0xD8254CB2C586412B(Local_223.f_1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_600[2]), 713668775, 1) != 1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(&(uLocal_600[2]), vLocal_543, 2f, 2000, 0.25f, false, 40000f);
							func_256(&iLocal_588, 5);
						}
					}
					break;
				case 4:
					iLocal_587 = 3;
					if (ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])))
					{
						func_256(&iLocal_588, 6);
					}
					else
					{
						func_108(&(uLocal_600[2]), 0);
						if (ANIMSCENE::_0x25557E324489393C(Local_223.f_1) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_600[2]), Local_223.f_1))
						{
							func_264(Local_223.f_1, func_93(2), &(uLocal_600[2]));
						}
						if (ENTITY::DOES_ENTITY_EXIST((Local_16[0 /*12*/])->f_8))
						{
							if (func_262(&(uLocal_600[2]), "gunEquipped", 1067030938))
							{
								WEAPON::_0x1A47699E8D533E8F(&((Local_16[0 /*12*/])->f_8), &(uLocal_600[2]), 752097756, 0);
							}
							else
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_223.f_1, "objGun", (Local_16[0 /*12*/])->f_8);
							}
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_REACT(0, Global_35, Global_36, func_84(iLocal_14, 2), 2f, 0, 4);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_543, 2f, 2000, 0.25f, false, 40000f);
						func_265(&(uLocal_600[2]), &iVar1, 0, 0, 1, 1);
						func_39(Local_223.f_1);
						func_256(&iLocal_588, 5);
					}
					break;
				case 5:
					if ((iLocal_587 == 4 && ENTITY::DOES_ENTITY_EXIST(&(uLocal_600[2]))) && func_136(&(uLocal_600[2]), vLocal_543, 1) < 2f)
					{
						TASK::TASK_STAND_STILL(&(uLocal_600[2]), -1);
						func_292(uLocal_600[2]);
						func_114(&iLocal_584, 13);
						func_256(&iLocal_588, 6);
					}
					break;
				case 6:
					break;
			}
			break;
		case 1:
			switch (iLocal_588)
			{
				case 0:
					if (!func_115(-2147483648))
					{
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), -462412321) && (func_223(Global_35, &(uLocal_620[3]), 1, 0) || func_223(Global_35, &(uLocal_620[4]), 1, 0)))
							{
								func_109(-2147483648);
							}
						}
					}
					if (((!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[3])) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[3]), 528459669)) || !ANIMSCENE::_0x25557E324489393C(Local_223.f_1)) || ANIMSCENE::_0xD8254CB2C586412B(Local_223.f_1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])))
						{
							TASK::TASK_STAND_STILL(&(uLocal_600[2]), -1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[3])))
						{
							TASK::TASK_STAND_STILL(&(uLocal_600[3]), -1);
						}
						func_256(&iLocal_588, 3);
					}
					break;
				case 3:
					if (iLocal_587 == 4)
					{
						if (!ANIMSCENE::_0x25557E324489393C(Local_1241.f_2) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1241.f_2))
						{
							if (ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])) || !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uLocal_600[2])))
							{
								func_292(uLocal_600[2]);
								func_292(uLocal_600[3]);
								func_256(&iLocal_588, 6);
							}
						}
					}
					break;
				case 4:
					if (func_255(Local_223.f_1, 0.899f, 1065353216))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_223.f_1, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_619))
						{
							ENTITY::PLAY_ENTITY_ANIM(iLocal_619, (Local_497[8 /*2*/])->f_1, &(Local_497[8 /*2*/]), 1000f, true, true, false, 0f, 0);
						}
						func_292(uLocal_600[2]);
						func_292(uLocal_600[3]);
						func_114(&iLocal_584, 13);
						func_256(&iLocal_588, 6);
					}
					else if (!ANIMSCENE::_0x25557E324489393C(Local_223.f_1) || ANIMSCENE::_0xD8254CB2C586412B(Local_223.f_1, 0))
					{
						func_292(uLocal_600[2]);
						func_292(uLocal_600[3]);
						func_114(&iLocal_584, 13);
						func_256(&iLocal_588, 6);
					}
					break;
				case 6:
					break;
			}
			break;
		case 2:
			switch (iLocal_588)
			{
				case 0:
					if (ANIMSCENE::_0x25557E324489393C(Local_223.f_1) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_223.f_1, 0))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), -589377963) || ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[3]), -589377963))
						{
							func_109(2);
							func_256(&iLocal_588, 1);
						}
					}
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					if (func_293())
					{
						iVar0 = 2;
						while (iVar0 <= 3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_600[iVar0])))
							{
								if (func_129(Global_35, &(uLocal_600[iVar0]), 0, 5f, 0))
								{
									PED::DELETE_PED(uLocal_600[iVar0]);
								}
							}
							iVar0++;
						}
						if ((!func_40(&(uLocal_600[2]), 0, 1) || TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_600[2]), 713668775, 1) != 1) && (!func_40(&(uLocal_600[3]), 0, 1) || TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_600[3]), 713668775, 1) != 1))
						{
							func_256(&iLocal_588, 6);
						}
					}
					break;
				case 4:
					if (func_272(&uLocal_774, 5f))
					{
						func_114(&iLocal_584, 13);
						func_256(&iLocal_588, 6);
					}
					else if (!func_284(&uLocal_774))
					{
						func_263(&uLocal_774);
					}
					break;
				case 6:
					break;
			}
			break;
	}
}

void func_138()
{
	switch (iLocal_14)
	{
		case 1:
			if (!func_115(33554432))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), -167301387))
				{
					func_290(1891783641, &(uLocal_600[2]), 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[3]), -1840721831))
				{
					func_290(249295937, &(uLocal_600[3]), 1);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(1024)))
			{
				if (func_115(-2147483648))
				{
					func_261(&(uLocal_600[2]), &(uLocal_600[3]), func_294(1024), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			break;
		case 2:
			if (func_115(33554432))
			{
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(1024)))
			{
				func_290(1891783641, &(uLocal_600[2]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[3]), func_275(2048)))
			{
				func_290(1891783641, &(uLocal_600[3]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(4096)))
			{
				func_290(1891783641, &(uLocal_600[2]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[3]), func_275(8192)))
			{
				func_290(1891783641, &(uLocal_600[3]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(16384)))
			{
				func_290(1891783641, &(uLocal_600[2]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(32768)))
			{
				func_290(1891783641, &(uLocal_600[2]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(65536)))
			{
				func_290(1891783641, &(uLocal_600[2]), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), func_275(131072)))
			{
				func_290(1891783641, &(uLocal_600[2]), 1);
			}
			break;
		case 0:
			break;
	}
}

void func_139()
{
	if (func_115(1048576))
	{
		if (!func_115(1048576))
		{
			func_295();
		}
		return;
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_223.f_1))
	{
		if (ANIMSCENE::_0xD8254CB2C586412B(Local_223.f_1, 0) || ((ANIMSCENE::_0xA9016536015DE29D(Local_223.f_1, &(sLocal_553[1])) && ANIMSCENE::_0x1F0E401031E20146(Local_223.f_1, &(sLocal_553[1]))) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_223.f_1) > 0.99f))
		{
			func_109(1048576);
		}
	}
	else
	{
		func_109(1048576);
	}
}

void func_140()
{
	if (func_115(262144) || func_115(524288))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 0:
			if (func_117(vLocal_532, 1) < 2.5f)
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(&(uLocal_600[2])) || func_223(Global_35, &(uLocal_620[3]), 1, 0))
				{
					if (func_284(&uLocal_746) && !func_296(&uLocal_746))
					{
						if (func_285(&uLocal_746) > 50f || (func_223(Global_35, &(uLocal_620[3]), 1, 0) && func_285(&uLocal_746) > 2f))
						{
							func_297();
							func_109(4194304);
							func_109(2048);
						}
					}
					else if (func_296(&uLocal_746))
					{
						func_298(&uLocal_746);
					}
					else
					{
						func_263(&uLocal_746);
					}
				}
				else if (!func_296(&uLocal_746))
				{
					func_299(&uLocal_746);
				}
			}
			else if (!func_296(&uLocal_746))
			{
				func_299(&uLocal_746);
			}
			break;
		default:
			if (func_117(vLocal_532, 1) < 2.5f)
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(&(uLocal_600[2])))
				{
					if (!func_284(&uLocal_746))
					{
						func_263(&uLocal_746);
					}
					else if (func_285(&uLocal_746) > 2f)
					{
						func_297();
						func_109(4194304);
						func_109(2048);
					}
				}
				else if (func_284(&uLocal_746))
				{
					func_300(&uLocal_746);
				}
			}
			break;
	}
}

bool func_141()
{
	float fVar0;

	if (func_115(16777216))
	{
		if (func_293())
		{
			func_287(16777216);
			func_36(&uLocal_610, 1);
		}
	}
	else if (!func_293())
	{
		if (!func_115(8388608))
		{
			func_301(&uLocal_610, &uLocal_600, vLocal_532);
		}
		func_109(16777216);
		func_36(&uLocal_610, 0);
	}
	if (!func_115(33554432) && Local_1241 == 4)
	{
		func_109(33554432);
	}
	switch (iLocal_587)
	{
		case 0:
			Local_1241.f_16 = "RE_WINDOW_PEEK";
			if (iLocal_14 == 0)
			{
				Local_1241.f_46 = 1500;
				Local_1241.f_45 = 2f;
			}
			else
			{
				Local_1241.f_45 = 3f;
			}
			switch (iLocal_14)
			{
				case 0:
					Local_1241.f_51 = { -1786.066f, -401.217f, 155.484f };
					Local_1241.f_54 = { 0f, 0f, 0f };
					Local_1241.f_39 = -6.1f;
					Local_1241.f_40 = -8.5f;
					Local_1241.f_41 = { -1784.2f, -404.3f, 157f };
					Local_1241.f_1 = "script@beat@town@peepingtom@preenwindowpeek";
					Local_1241.f_25 = { -1784.5f, -405.8f, 157.3f };
					Local_1241.f_28 = { -13.2f, 0f, -2.8f };
					Local_1241.f_31 = { -1784.5f, -405.8f, 157.3f };
					Local_1241.f_34 = { -13.2f, 0f, -2.8f };
					func_302(&Local_1241, 1);
					func_302(&Local_1241, 2);
					func_302(&Local_1241, 4);
					func_302(&Local_1241, 128);
					func_302(&Local_1241, 256);
					func_302(&Local_1241, 512);
					func_302(&Local_1241, 8192);
					Local_1241.f_48 = { -1784.219f, -404.4418f, 156.4077f };
					bLocal_1298 = false;
					break;
				case 1:
					Local_1241.f_51 = { -291.816f, 866.197f, 120.138f };
					Local_1241.f_54 = { 0f, 0f, 85f };
					Local_1241.f_39 = 81.8f;
					Local_1241.f_40 = -0.7f;
					Local_1241.f_41 = { -285.5f, 865.6f, 121.7f };
					Local_1241.f_1 = "script@beat@town@peepingtom@spankwindowpeek";
					func_302(&Local_1241, 2);
					func_302(&Local_1241, 1);
					func_302(&Local_1241, 256);
					func_302(&Local_1241, 512);
					Local_1241.f_25 = { -282.1f, 865.3f, 122f };
					Local_1241.f_28 = { -9.3f, 0f, 81.9f };
					Local_1241.f_48 = { -285.493f, 865.595f, 121.071f };
					break;
				case 2:
					Local_1241.f_51 = { -262.63f, 734.317f, 117.177f };
					Local_1241.f_54 = { 0f, 0f, 110f };
					Local_1241.f_39 = 19.7f;
					Local_1241.f_40 = -6.4f;
					Local_1241.f_41 = { -260.7f, 732.8f, 118.5f };
					Local_1241.f_1 = "script@beat@town@peepingtom@opiumwindowpeek";
					func_302(&Local_1241, 1);
					func_302(&Local_1241, 2);
					func_302(&Local_1241, 256);
					func_302(&Local_1241, 512);
					Local_1241.f_25 = { -259.8f, 730.6f, 119.4f };
					Local_1241.f_28 = { -17.2f, 0f, 20.6f };
					Local_1241.f_48 = { -260.5985f, 732.3628f, 118.0494f };
					break;
			}
			iLocal_587 = 1;
			break;
		case 1:
			func_303(&Local_1241, 0, 0, 1, 0, 0);
			if (Local_1241 == 4 || func_115(4194304))
			{
				func_304();
				if (Local_1241 == 4)
				{
					func_109(2048);
				}
				if (iLocal_14 != 0)
				{
					func_297();
				}
				iLocal_587 = 2;
			}
			break;
		case 2:
			func_303(&Local_1241, 0, 0, bLocal_1298, 0, 0);
			func_305();
			if (Local_1241 == 4)
			{
				func_109(2048);
			}
			if (iLocal_14 != 0)
			{
				if (!func_115(1024))
				{
					if (Local_1241 == 4 || (func_117(vLocal_532, 1) < 2.5f && !ENTITY::IS_ENTITY_OCCLUDED(&(uLocal_600[2]))))
					{
						if (func_115(65536))
						{
							func_109(1024);
						}
						if (func_284(&uLocal_762))
						{
							if (iLocal_14 == 1)
							{
								fVar0 = 12f;
							}
							else
							{
								fVar0 = 14f;
							}
							if (func_272(&uLocal_762, fVar0))
							{
								func_109(1024);
							}
						}
						else if (func_296(&uLocal_762))
						{
							func_298(&uLocal_762);
						}
						else
						{
							func_263(&uLocal_762);
						}
					}
					else
					{
						if (Local_1241 == 5)
						{
							func_109(65536);
						}
						if (func_284(&uLocal_762))
						{
							func_299(&uLocal_762);
						}
					}
				}
			}
			if (!func_115(67108864))
			{
				if (!func_306(2))
				{
					if ((Local_1241 == 2 || Local_1241 == 3) || Local_1241 == 4)
					{
						func_307(2);
						func_261(Global_35, 0, func_308(iLocal_14, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (Local_1241 == 4)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), 630311317))
					{
						func_109(67108864);
					}
					if (!func_115(262144))
					{
						if (iLocal_14 == 0)
						{
							if (func_284(&uLocal_759))
							{
								if (func_309(&uLocal_759) > 400)
								{
									func_300(&uLocal_759);
									func_297();
								}
							}
							else
							{
								func_263(&uLocal_759);
							}
						}
					}
					switch (iLocal_14)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_600[2])) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_600[2]), 1123535862))
							{
								if (func_286(func_310(iLocal_14), 1, Global_35, 0))
								{
									if (!func_306(1))
									{
										func_307(1);
										func_261(Global_35, 0, func_308(iLocal_14, 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
								}
							}
							break;
					}
				}
			}
			switch (iLocal_14)
			{
				case 0:
					if (((func_115(262144) && func_254(Local_223.f_1, "pblExit")) && func_255(Local_223.f_1, 0.586f, 1065353216)) && func_293())
					{
						bLocal_1299 = true;
						iLocal_587 = 3;
					}
					if ((func_115(262144) && func_254(Local_223.f_1, "pblExit")) && func_255(Local_223.f_1, 0.8512f, 1065353216))
					{
						if (func_293())
						{
							bLocal_1299 = true;
						}
						iLocal_587 = 3;
					}
					break;
				case 1:
					if (bLocal_1298)
					{
						if (func_254(Local_223.f_1, "pblExit") && func_255(Local_223.f_1, 0.8451f, 1065353216))
						{
							bLocal_1298 = false;
						}
					}
					if (((func_115(262144) && func_293()) && func_254(Local_223.f_1, "pblExit")) && func_255(Local_223.f_1, 0.8451f, 1065353216))
					{
						bLocal_1299 = true;
						iLocal_587 = 3;
					}
					break;
				case 2:
					if (!func_306(1))
					{
						if (func_284(&uLocal_771))
						{
							if (func_285(&uLocal_771) > 10f)
							{
								if (Local_1241 == 5)
								{
									func_307(1);
									func_261(Global_35, 0, func_308(iLocal_14, 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
							}
						}
						else if (Local_1241 == 4)
						{
							func_263(&uLocal_771);
						}
					}
					if (bLocal_1298 && func_255(Local_223.f_1, 0.8621f, 1065353216))
					{
						if (func_293())
						{
							bLocal_1299 = true;
							iLocal_587 = 3;
						}
						else
						{
							bLocal_1298 = false;
						}
					}
					break;
			}
			if ((func_115(1048576) || func_115(131072)) || func_115(2))
			{
				func_295();
				iLocal_587 = 3;
			}
			break;
		case 3:
			func_303(&Local_1241, bLocal_1299, 1, bLocal_1298, 0, 0);
			func_287(16777216);
			func_36(&uLocal_610, 1);
			iLocal_587 = 4;
			break;
		case 4:
			func_305();
			func_303(&Local_1241, bLocal_1299, 1, bLocal_1298, 0, 0);
			if (!func_306(4))
			{
				if (func_115(-2147483648) || iLocal_14 != 1)
				{
					if (Local_1241 == 5)
					{
						func_108(Global_35, 0);
						func_307(4);
						func_261(Global_35, 0, func_308(iLocal_14, 4), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
			}
			switch (iLocal_14)
			{
				case 0:
					if ((!func_306(8) && func_115(134217728)) && func_272(&uLocal_749, 1.5f))
					{
						func_307(8);
						func_261(Global_35, 0, func_308(iLocal_14, 8), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1931509438))
					{
						func_109(134217728);
						func_263(&uLocal_749);
					}
					break;
				case 1:
					break;
				case 2:
					break;
			}
			break;
	}
	return func_293();
}

int func_142()
{
	if (!func_311(Global_1395482->f_1))
	{
		return 0;
	}
	return func_312(Global_1395482->f_1, 32);
}

bool func_143(int iParam0)
{
	if (func_49(iParam0, 1))
	{
		return false;
	}
	return (1 == func_313(iParam0) || 2 == func_313(iParam0));
}

float func_144(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_145(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_97(uParam0, 268435456);
	}
	else
	{
		func_184(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_97(uParam0, 1073741824);
	}
	else
	{
		func_184(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_97(uParam0, 536870912);
	}
	else
	{
		func_184(uParam0, 536870912);
	}
}

var func_146(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_147(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_314(sParam1));
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_86(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_315(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_315(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1 || &Global_17503.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17503.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_152(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

void func_153(int iParam0, bool bParam1)
{
	if (func_40(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_316(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_154(var uParam0, var uParam1)
{
	if (func_49(uParam0->f_3, 16777216))
	{
		if (func_317(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_155(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_156(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_157(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_40(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_156(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_292(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_158(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_171))
	{
		func_318(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_319(uParam0);
	func_320(uParam0);
	func_321(uParam0);
	if (!func_322(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_245(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_323();
	}
	if (!func_324(uParam0->f_3) && !func_49(uParam0->f_3, 256))
	{
		func_325(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_38(uParam0->f_173);
	func_38(uParam0->f_172);
}

void func_159(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_160(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_326() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_162(int iParam0)
{
	if (((func_163(iParam0, 1) && func_163(iParam0, 2)) && func_163(iParam0, 8)) && func_163(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_163(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_164(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_177(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_327(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_328(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_165(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_49(iParam0, 32))
	{
		if (func_329(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_330(Global_35, &(uParam1->f_12)) };
				if (!func_88(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_331(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_246(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_247());
		if (func_332(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_249(iVar0, func_248(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_249(iVar0, func_248(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_49(iParam0, 1))
		{
			func_333(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_334(iParam0);
}

int func_166(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_335(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_98(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_336(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_336(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

Vector3 func_167(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*iParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_327(iParam1))
	{
		if (!func_337(iParam1, iVar0))
		{
			vVar4 = { func_164(iParam1, iVar0) };
			if (!func_88(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_172(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_338(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_88(vVar4))
	{
	}
	return vVar1;
}

int func_168(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_34("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_169(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_327(iParam0))
	{
		vVar1 = { func_164(iParam0, iVar0) };
		if (func_339(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_170(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_171(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_340(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_341(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_88(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_342(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_168(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_172(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_81(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_49(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_173(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*uParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_174(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_343(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_344(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_345(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_346(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_175(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_176(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

bool func_177(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_178(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_179(int iParam0, int iParam1)
{
	if (func_347(iParam0))
	{
		return;
	}
	if (func_348(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_180(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_184(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

void func_181(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_247());
	}
}

void func_182(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, func_247());
	}
}

void func_183(int iParam0, int iParam1)
{
	func_349(iParam0, iParam1);
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_186(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_350(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_351(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_351(), iVar3);
		if (func_352(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_187(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_188(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0 /*8*/]))
		{
			StringCopy((*uParam1)[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

int func_189(var uParam0)
{
	if (!func_353(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_353(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

int func_190(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_49(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_354() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_49(iParam0, 2);
		bVar1 = func_49(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_227())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_191(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}
	if (func_98(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_192(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam1 = 240f;
	}
	else
	{
		*uParam1 = 215f;
	}
	*uParam0 = 110f;
	if (func_98(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_98(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_193(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*32*/])->f_1 != 0)
		{
			iVar1++;
			if (((*uParam0)[iVar0 /*32*/])->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

bool func_194(var uParam0)
{
	return func_86(*uParam0, 32);
}

bool func_195(var uParam0)
{
	return func_86(*uParam0, 1);
}

int func_196(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_355(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_197(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	if (uParam0->f_136 < 0 || uParam0->f_136 > 15)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	((*uParam0)[uParam0->f_136 /*9*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_136 /*9*/])->f_2 = { vParam3 };
	((*uParam0)[uParam0->f_136 /*9*/])->f_5 = uParam6;
	((*uParam0)[uParam0->f_136 /*9*/])->f_7 = iParam1;
	((*uParam0)[uParam0->f_136 /*9*/])->f_8 = iParam11;
	if (bParam7)
	{
		func_97(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 4);
	}
	if (bParam8)
	{
		func_97(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 8);
	}
	if (iParam9 == 1)
	{
		func_97(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 1);
	}
	else if (iParam9 == 2)
	{
		func_97(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 2);
	}
	if (bParam10)
	{
		func_97(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 16);
	}
	uParam0->f_136++;
}

int func_198(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*9*/]) && ((*uParam0)[iVar0 /*9*/])->f_1 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*9*/])->f_1))
			{
				bVar1 = func_4(((*uParam0)[iVar0 /*9*/])->f_6, 4);
				bVar2 = func_4(((*uParam0)[iVar0 /*9*/])->f_6, 8);
				bVar3 = func_4(((*uParam0)[iVar0 /*9*/])->f_6, 16);
				if (func_4(((*uParam0)[iVar0 /*9*/])->f_6, 1))
				{
					iVar4 = 1;
				}
				else if (func_4(((*uParam0)[iVar0 /*9*/])->f_6, 2))
				{
					iVar4 = 2;
				}
				else
				{
					iVar4 = 0;
				}
				if (((*uParam0)[iVar0 /*9*/])->f_8 != 0 && PED::_0x610438375E5D1801(((*uParam0)[iVar0 /*9*/])->f_8))
				{
					(*uParam0)[iVar0 /*9*/] = PED::_0xEAF682A14F8E5F53(((*uParam0)[iVar0 /*9*/])->f_8, ((*uParam0)[iVar0 /*9*/])->f_2, ((*uParam0)[iVar0 /*9*/])->f_5, bVar1, bVar2, 1, 0);
				}
				else
				{
					(*uParam0)[iVar0 /*9*/] = func_356(((*uParam0)[iVar0 /*9*/])->f_1, ((*uParam0)[iVar0 /*9*/])->f_2, ((*uParam0)[iVar0 /*9*/])->f_5, bVar1, bVar2, iVar4, bVar3, 1, 1, 0, 0, 0, 0);
				}
				if (bParam1)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0 /*9*/], false);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_136)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*9*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0 /*9*/], true);
				ENTITY::_0xA91E6CF94404E8C9(uParam0[iVar0 /*9*/]);
			}
			iVar0++;
		}
	}
	return 1;
}

int func_199(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (((*uParam0)[iVar0 /*9*/])->f_7 == iParam1)
		{
			return uParam0[iVar0 /*9*/];
		}
		iVar0++;
	}
	return 0;
}

void func_200(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (bParam2)
		{
			func_357(&vVar0, uParam1->f_22);
		}
		if (PED::IS_PED_HUMAN(*uParam0) && uParam1->f_10)
		{
			PED::_0x0FB1BA7FF73B41E1(*uParam0, uParam1->f_4, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			EVENT::_0x9520175B35E2268D(*uParam0, 1);
			if (func_358(*uParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			}
		}
		if (!bParam3 && func_359(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
			PED::SET_PED_TO_RAGDOLL(*uParam0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, !func_360(&(uParam1->f_22)));
			func_362(*uParam0, func_361(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(*uParam0);
		}
		if (func_363(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
		func_365(*uParam0, !func_364(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 4, func_366(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, func_367(&(uParam1->f_22)));
		if (func_368(&(uParam1->f_22)))
		{
			func_369(*uParam0, 1);
		}
		if (func_360(&(uParam1->f_22)))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
		}
	}
}

void func_201(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_40(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_202(var uParam0)
{
	return func_86(*uParam0, 16);
}

void func_203(var uParam0)
{
	int iVar0;
	struct<9> Var1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*((*uParam0)[iVar0 /*9*/]) = { Var1 };
		iVar0++;
	}
	uParam0->f_136 = 0;
}

int func_204(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

bool func_205(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_206(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_207(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_208(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	if (bParam1)
	{
		func_371(iParam0, 4);
		func_372(iVar0, 1);
		func_373(iVar0, 1);
	}
	else
	{
		func_374(iParam0, 4);
		func_373(iVar0, 0);
	}
}

void func_209(int* iParam0, char* sParam1)
{
	if (func_205(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_207(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_212(iParam0, 1);
}

bool func_210(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_211(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_212(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_213(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_205(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_370(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_375(iVar0);
	*uParam0 = 0;
}

Vector3 func_214(var uParam0)
{
	return uParam0->f_51;
}

void func_215(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_216()
{
	return &Global_1935436 == 2;
}

void func_217(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_218(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_49(iParam0, 2))
	{
		func_377(iParam0, func_376(iParam1));
	}
	else
	{
		func_378(iParam0, func_354());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_379(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_380(iParam0, 0);
	func_381(iParam0);
	func_382(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_49(iParam0, 16))
	{
		func_219(iParam0, 0, 0, 0, 0);
	}
}

void func_219(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_383() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_177(iVar1) && !func_49(iVar1, iParam2)) && (!bParam3 || !func_236(iVar1))) && (!bParam4 || !func_384(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_385(iVar0);
			}
		}
		iVar0++;
	}
}

int func_220(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_221(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_332(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_49(uParam0->f_3, 1073741824))
			{
				func_386(2, -1, 0, 0, 0);
			}
			else
			{
				func_386(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_386(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_387(1, uParam0->f_177))
				{
					func_388(16, uParam0->f_177);
					func_389(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_390(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_386(8, -1, 0, 0, 0);
	}
}

int func_222()
{
	if (func_391(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_392())
		{
			return 1;
		}
	}
	return 0;
}

bool func_223(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

float func_224(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_49(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_49(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_49(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_49(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_49(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_49(uParam0->f_3, 1))
		{
		}
		else if (func_49(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_225(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_393(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (iParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_394(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_395() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_226(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_100(uParam0);
	return 1;
}

bool func_227()
{
	return (Global_1894899 & 1 != 0 && func_3() != -1);
}

int func_228(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_229(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_396(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_398(func_397());
	if (func_4(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_4(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_231(int iParam0, int iParam1)
{
	return (func_220(iParam0) && iParam1) != 0;
}

int func_232(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_399(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_400(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_401(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_402(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_403(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_404(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_405(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_233(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_406(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_235(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_407())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_408(&(Global_1898164->f_1[0 /*5*/]));
		if (func_409(iVar0) && func_410(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_411(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_236(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	if (func_412(64) && func_413(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_237(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_414(iVar0) || func_415(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_238()
{
	return Global_1894899 & 4 != 0;
}

int func_239(int iParam0)
{
	if (!func_416(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_240(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_241(vector3 vParam0, int iParam3)
{
	if (!func_240(iParam3))
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_242(vector3 vParam0)
{
	float fVar0;

	if (func_88(vParam0))
	{
		return false;
	}
	fVar0 = func_156(func_227(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_243(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_263(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_263(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_284(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_417(uParam0, fParam2))
		{
			return 1;
		}
		if (func_284(uParam0))
		{
			func_300(uParam0);
		}
	}
	return 0;
}

bool func_244(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_245(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_88(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_339(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_246(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0f;
	}
	if (!func_418(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_247()
{
	return "unnamed";
}

char* func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_249(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_333(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_250(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_251(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_419(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_420(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_422(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_423(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_424(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_229(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_425(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_426(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_427(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_428(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_428(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_429(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_430(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_431(uParam2, 4000))
				{
					if ((func_432(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_433(uParam2, iParam0)) && func_434(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_432(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_433(uParam2, iParam0)) && func_434(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_435(iParam0, Global_1935630->f_41))
							{
								func_436();
								*uParam3 = 2;
								func_421(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_435(iParam0, Global_1935630->f_41))
						{
							func_436();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_437(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_438() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_436();
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_439())
					{
						if (func_435(iParam0, Global_1935630->f_42))
						{
							func_436();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_440(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_441(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_442(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_443(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_444(uParam2, 4000))
				{
					if (func_445(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_446(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_447(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_253(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_448(Global_35, iParam0, bParam1, iParam2);
}

bool func_254(int iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || !func_283(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1);
}

int func_255(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (!func_283(iParam0))
	{
		return 0;
	}
	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0);
	if (fVar0 > fParam1 && fVar0 < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_256(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

var func_257(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_449(&iVar0);
	if (func_4(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_450(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_4(iVar0, 134217728))
	{
		func_451(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_452(558))
				{
					func_453(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

int func_258(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

void func_259()
{
	if (func_115(32768))
	{
		return;
	}
	func_109(32768);
	func_454(11, 1682361219, 0, 0, &(uLocal_600[0]), 0, 1065353216, 0);
}

char* func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_PT_STR_V1_INTERRUPT";
		case 1:
			return "RE_PT_VAL_V1_INTERRUPT";
		case 2:
			return "RE_PT_VAL_V2_INTERRUPT";
		default:
			break;
	}
	return "INVALID_STRING";
}

bool func_261(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_455(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_262(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_263(var uParam0)
{
	func_456(uParam0, 0f);
}

void func_264(int iParam0, char* sParam1, int iParam2)
{
	if (!func_40(iParam2, 0, 0))
	{
		return;
	}
	else if (!func_283(iParam0))
	{
		return;
	}
	else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, iParam0))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam1, iParam2);
}

void func_265(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_266(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (iLocal_14 != 0)
	{
		return 0;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_peeping_tom_str"))
	{
		return 0;
	}
	else if (!func_223(&(uLocal_600[iParam0]), &(uLocal_620[0]), 1, 0))
	{
		return 0;
	}
	else if (!bParam1)
	{
		return 1;
	}
	vVar0 = { -1786.838f, -404.5404f, 155.4959f };
	if (func_117(vVar0, 1) > func_136(&(uLocal_600[iParam0]), vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0)
{
	if (!func_40(&(uLocal_600[iParam0]), 0, 1))
	{
		return 0;
	}
	if (!func_284(vLocal_739[iParam0 /*3*/]))
	{
		func_263(vLocal_739[iParam0 /*3*/]);
	}
	else if (func_309(vLocal_739[iParam0 /*3*/]) >= &iLocal_594[iParam0])
	{
		func_300(vLocal_739[iParam0 /*3*/]);
		return 1;
	}
	return 0;
}

int func_268(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (iParam0 == 0)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	return 2;
}

char* func_269()
{
	return "GENERIC_SHOCKED_HIGH";
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 2;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 1;
}

bool func_271(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_457(iParam0, &Var0);
}

int func_272(var uParam0, float fParam1)
{
	if (func_417(uParam0, fParam1))
	{
		func_300(uParam0);
		return 1;
	}
	return 0;
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;

	func_109(iParam1);
	func_316(&(uLocal_600[iParam0]), 1088421888, 0, 0);
	func_458(uLocal_600[iParam0], Local_939[iParam0 /*75*/], &((Local_939[iParam0 /*75*/])->f_21), 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_600[iParam0]), false);
	if (iParam2 != 0)
	{
		Var0.f_14 = &uLocal_600[iParam0];
		Var0 = Global_35;
		Var0.f_7 = func_3();
		Var0.f_8 = 0;
		Var0.f_11 = 100;
		Var0.f_12 = iParam2;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
	PED::_0x24C82EF607105FAA(&(uLocal_600[iParam0]), 1789063806);
	PED::_0xE737D5F14304A2EC(&(uLocal_600[iParam0]), PLAYER::GET_PLAYER_INDEX(), 120000);
}

void func_274(int iParam0, bool bParam1)
{
	if ((func_86(iLocal_592, 2048) || func_86(iLocal_592, 262144)) || func_86(iLocal_592, 512))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			if (bParam1)
			{
				func_261(&(uLocal_600[iParam0]), Global_35, "RE_PT_VAL_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_183(&iLocal_592, 2048);
			}
			else
			{
				func_459(&(uLocal_600[iParam0]), Global_35, 2048);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_261(&(uLocal_600[iParam0]), Global_35, "RE_PT_VAL_V2_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_183(&iLocal_592, 262144);
			}
			else
			{
				func_459(&(uLocal_600[iParam0]), Global_35, 262144);
			}
			break;
		case 0:
			if (bParam1)
			{
				func_261(&(uLocal_600[iParam0]), Global_35, "RE_PT_STR_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_183(&iLocal_592, 512);
			}
			else
			{
				func_459(&(uLocal_600[iParam0]), Global_35, 512);
			}
			break;
	}
}

int func_275(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return -653745085;
				case 2:
					return 1088214821;
				case 4:
					return 801191382;
				case 8:
					return 1730691853;
				case 16:
					return 884351784;
				case 32:
					return -1166954655;
				case 64:
					return -650869804;
				case 128:
					return -268180869;
				case 256:
					return -1581205129;
				case 512:
					return 865122202;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 2093352857;
				case 2:
					return 791505834;
				case 4:
					return 2137988235;
				case 8:
					return -1472687480;
				case 16:
					return 1067918524;
				case 32:
					return 2061890670;
				case 64:
					return -1188045600;
				case 128:
					return -8980583;
				case 256:
					return 54821724;
				case 512:
					return -174751630;
				case 1024:
					return -997646987;
				case 2048:
					return -298356527;
				case 4096:
					return -536488850;
				case 8192:
					return -162692867;
				case 16384:
					return 743271676;
				case 32768:
					return 377438560;
				case 65536:
					return -929553001;
				case 131072:
					return 1123293769;
				case 262144:
					return 865122202;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					return -367171574;
				case 2:
					return 1882791851;
				case 4:
					return 309297304;
				case 8:
					return -1599801200;
				case 16:
					return -888622819;
				case 64:
					return 1731480445;
				case 128:
					return 2113394522;
				case 256:
					return -1051544954;
				case 512:
					return 1374799567;
				case 1024:
					return 2059991957;
				case 2048:
					return 865122202;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_276(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_460(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_278(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_279(int iParam0, int iParam1, float fParam2)
{
	return func_461(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_280(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_281()
{
	if (func_223(Global_35, &(uLocal_620[6]), 1, 0) || Global_36.f_2 > func_462(iLocal_14))
	{
		return 0;
	}
	if (func_463(&uLocal_600, 2f, 0, 0, -1))
	{
		fLocal_599 = 0f;
		func_112(&((Local_939[0 /*75*/])->f_21), 0, 0);
		func_112(&((Local_939[1 /*75*/])->f_21), 0, 0);
		func_111(uLocal_605[0]);
		func_109(8);
		func_263(&uLocal_736);
		return 1;
	}
	return 0;
}

float func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.991f;
		case 1:
			return 0.997f;
		case 2:
			return 0.991f;
		default:
			break;
	}
	return 1f;
}

bool func_283(int iParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		return false;
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(iParam0, 1, 0))
	{
		return false;
	}
	return ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0);
}

bool func_284(var uParam0)
{
	return func_464(*uParam0, 1);
}

float func_285(var uParam0)
{
	if (!func_284(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_296(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_395() - uParam0->f_1);
}

int func_286(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_465(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_466(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_287(int iParam0)
{
	if (func_115(iParam0))
	{
		func_467(&iLocal_591, iParam0);
	}
}

char* func_288(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "BUMP";
				case 1:
					return "PLAYER_LOITERING";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return "BLOCKED_GENERIC";
						case 1:
							return "PLAYER_LOITERING";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return "BUMP";
						case 1:
							return "BUMP";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "INVALID_STRING";
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 3;
						case 1:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 1;
}

void func_290(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

void func_291(int iParam0)
{
	func_468(1);
	LAW::_0xF60386770878A98F(PLAYER::PLAYER_ID(), iParam0, 0, 0, 1);
	LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 75f, 100f, 0, 0, 0, 0);
}

void func_292(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

int func_293()
{
	if ((Local_1241 < 2 || Local_1241 == 7) || Local_1241 == 8)
	{
		return 1;
	}
	return 0;
}

char* func_294(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return "RE_PT_STR_V1_SLOBBERIN";
				case 2:
					return "RE_PT_STR_V1_QUIET";
				case 4:
					return "RE_PT_STR_V1_ROOM";
				case 8:
					return "RE_PT_STR_V1_WAITING";
				case 16:
					return "RE_PT_STR_V1_ROUTINE";
				case 32:
					return "RE_PT_STR_V1_SHOWTIME";
				case 64:
					return "RE_PT_STR_V1_DONT_STOP";
				case 128:
					return "RE_PT_STR_V1_LEAVE";
				case 256:
					return "RE_PT_STR_V1_SPOTTED";
				case 512:
					return "RE_PT_STR_V1_AGGRO";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return "RE_PT_VAL_V2_HURRY";
				case 2:
					return "RE_PT_VAL_V2_PROLOGUE";
				case 4:
					return "RE_PT_VAL_V2_BOOTS";
				case 8:
					return "RE_PT_VAL_V2_HAPPEN";
				case 16:
					return "RE_PT_VAL_V2_SHEETS";
				case 32:
					return "RE_PT_VAL_V2_SMOKIN";
				case 64:
					return "RE_PT_VAL_V2_TOBACCO";
				case 128:
					return "RE_PT_VAL_V2_CUES";
				case 256:
					return "RE_PT_VAL_V2_CANOODLIN";
				case 512:
					return "RE_PT_VAL_V2_LEAVE";
				case 1024:
					return "RE_PT_VAL_V2_FUDDLED";
				case 2048:
					return "RE_PT_VAL_V2_HEAVY";
				case 4096:
					return "RE_PT_VAL_V2_AMAZING";
				case 8192:
					return "RE_PT_VAL_V2_STOP";
				case 16384:
					return "RE_PT_VAL_V2_YOU_ARE";
				case 32768:
					return "RE_PT_VAL_V2_WILD";
				case 65536:
					return "RE_PT_VAL_V2_LOVE";
				case 131072:
					return "RE_PT_VAL_V2_CLOUDS";
				case 262144:
					return "RE_PT_VAL_V2_AGGRO";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					return "RE_PT_VAL_V1_EVERYDAY";
				case 2:
					return "RE_PT_VAL_V1_TOUGH";
				case 4:
					return "RE_PT_VAL_V1_HOLD_YOU_01";
				case 8:
					return "RE_PT_VAL_V1_RECKON";
				case 16:
					return "RE_PT_VAL_V1_WRONG_01";
				case 32:
					return "RE_PT_VAL_V1_WRONG_B_01";
				case 64:
					return "RE_PT_VAL_V1_HELLNO";
				case 128:
					return "RE_PT_VAL_V1_LEAVE_01";
				case 256:
					return "RE_PT_VAL_V1_SPANK_REACT";
				case 512:
					return "RE_PT_VAL_V1_SPOTTED";
				case 1024:
					return "RE_PT_VAL_V1_THREATEN";
				case 2048:
					return "RE_PT_VAL_V1_AGGRO";
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_295()
{
	if (iLocal_14 == 1)
	{
		return;
	}
	if (!func_115(2097152))
	{
		if (func_115(1048576))
		{
			if (!func_115(2))
			{
				func_39(Local_223.f_1);
			}
			func_109(2097152);
		}
	}
}

bool func_296(var uParam0)
{
	return func_464(*uParam0, 2);
}

void func_297()
{
	if (!func_115(262144))
	{
		func_111(uLocal_605[0]);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223.f_1, "pblExit", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_223.f_1, "bPlayExit", true, false);
		Local_29.f_44 = 1;
		func_109(262144);
	}
}

void func_298(var uParam0)
{
	if (!func_284(uParam0))
	{
	}
	if (func_296(uParam0))
	{
		uParam0->f_1 = (func_395() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_469(uParam0, 2);
	}
}

void func_299(var uParam0)
{
	if (!func_284(uParam0))
	{
	}
	if (!func_296(uParam0))
	{
		uParam0->f_2 = (func_395() - uParam0->f_1);
		func_470(uParam0, 2);
	}
}

void func_300(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_301(var uParam0, var uParam1, vector3 vParam2)
{
	var uVar0;

	if (!func_88(vParam2))
	{
		uVar0 = func_471(uParam0, uParam1, *uParam0, vParam2, 25f, 0, 0, 0, -1, 1, 0, -1082130432, 0, 0);
	}
}

void func_302(var uParam0, int iParam1)
{
	if (!func_86(uParam0->f_3, iParam1))
	{
		func_183(&(uParam0->f_3), iParam1);
	}
}

int func_303(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	char* sVar15;
	vector3 vVar16;
	vector3 vVar28;
	vector3 vVar40;
	var uVar52;
	var uVar53;
	int iVar54;
	int iVar55;
	float fVar56;
	vector3 vVar57;

	if ((bParam1 && *iParam0 != 7) && *iParam0 != 8)
	{
		*iParam0 = 7;
	}
	switch (*iParam0)
	{
		case 0:
			if ((func_117(iParam0->f_48, 1) > iParam0->f_45 || CAM::_0x74F1D22EFA71FAB8()) || PAD::IS_CONTROL_PRESSED(1, 1644850270))
			{
				return 0;
			}
			if (!func_472(iParam0, 8192) && CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				if (func_205(iParam0->f_17))
				{
					func_213(&(iParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (PED::_0xA911EE21EDF69DAF(Global_35) || func_473(Global_35, -208384378))
			{
				if (func_205(iParam0->f_17))
				{
					func_213(&(iParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1))
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_2))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter"))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_2);
						return 0;
					}
				}
				else
				{
					iParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_1, 0, "pbl_enter", false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_2);
				}
			}
			if (!func_205(iParam0->f_17))
			{
				iParam0->f_17 = func_474(iParam0->f_16, -1053137564, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			func_475(iParam0, 16384);
			func_208(iParam0->f_17, 1, 1);
			*iParam0 = 1;
			break;
		case 1:
			if ((func_117(iParam0->f_48, 1) > iParam0->f_45 || CAM::_0x74F1D22EFA71FAB8()) || PAD::IS_CONTROL_PRESSED(1, 1644850270))
			{
				if (func_205(iParam0->f_17))
				{
					func_213(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (!func_472(iParam0, 8192) && CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				if (func_205(iParam0->f_17))
				{
					func_213(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (PED::_0xA911EE21EDF69DAF(Global_35) || func_473(Global_35, -208384378))
			{
				if (func_205(iParam0->f_17))
				{
					func_213(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1) && ANIMSCENE::_0x477122B8D05E7968(iParam0->f_2, 1, 0))
			{
				if (!func_88(iParam0->f_51) || !func_88(iParam0->f_54))
				{
					ANIMSCENE::_0xADF1D53F3B1FE0A7(iParam0->f_2, &vVar3, &vVar6, 2);
					if (!func_355(iParam0->f_51, vVar3) && !func_355(iParam0->f_54, vVar6))
					{
						vVar9 = { iParam0->f_51 };
						vVar12 = { iParam0->f_54 };
						if (func_88(vVar9))
						{
							vVar9 = { vVar3 };
						}
						if (func_88(vVar12))
						{
							vVar12 = { vVar6 };
						}
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_2, vVar9, vVar12, 2);
					}
				}
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iParam0->f_2))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_2, "arthur", Global_35, 0);
				}
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter"))
			{
				if (func_86(iParam0->f_3, 1) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_left"))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_left"))
					{
					}
					else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_enter_left"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_enter_left");
					}
				}
				if (func_86(iParam0->f_3, 2) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_right"))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_right"))
					{
					}
					else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_enter_right"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_enter_right");
					}
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1) || (ANIMSCENE::_0x477122B8D05E7968(iParam0->f_2, 1, 0) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter")))
			{
				if (func_476(iParam0->f_17, 1))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_473(Global_35, 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						}
						return 0;
					}
					sVar15 = "pbl_enter";
					if (func_88(iParam0->f_48))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_2, "arthur", &vVar16, true, "pbl_enter", 2))
						{
							iParam0->f_48 = { vVar16 };
						}
						if (((func_86(iParam0->f_3, 1) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_left")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_left")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_2, "arthur", &vVar28, true, "pbl_enter_left", 2))
						{
							if (func_88(vVar28))
							{
							}
							else if (func_88(vVar16) || func_117(vVar28, 1) < func_117(vVar16, 1))
							{
								sVar15 = "pbl_enter_left";
								iParam0->f_48 = { vVar28 };
							}
						}
						if (((func_86(iParam0->f_3, 2) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_right")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_right")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_2, "arthur", &vVar40, true, "pbl_enter_right", 2))
						{
							if (func_88(vVar40))
							{
							}
							else if (func_88(vVar16) || func_117(vVar40, 1) < func_117(vVar16, 1))
							{
								sVar15 = "pbl_enter_right";
								iParam0->f_48 = { vVar40 };
							}
						}
					}
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, sVar15, true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
					if (PED::_0xD5FE956C70FF370B(Global_35) && !func_472(iParam0, 128))
					{
						PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
						func_302(iParam0, 32);
					}
					else
					{
						func_475(iParam0, 32);
					}
					iParam0->f_47 = PED::_0xA29FD00D45311EB7(Global_35, "Stealth");
					if (iParam0->f_47 > 0f)
					{
						func_302(iParam0, 4096);
						PED::_0x411189E51B8020BA(Global_35, "Stealth");
					}
					if (func_472(iParam0, 256))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, func_472(iParam0, 512), 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_2, "Arthur", sVar15, 1069379748, 1, 0, 20000, -1082130432);
					*iParam0 = 2;
				}
			}
			else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_enter"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_enter");
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if ((!func_476(iParam0->f_17, 1) && !PAD::IS_CONTROL_PRESSED(0, -1053137564)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, -1053137564))
			{
				vVar0 = { iParam0->f_48 };
				iParam0->f_48 = { vVar0 };
				func_477(Global_35);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (func_472(iParam0, 4096))
				{
					PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", iParam0->f_47, -1);
					func_475(iParam0, 4096);
				}
				func_475(iParam0, 16384);
				func_208(iParam0->f_17, 1, 1);
				*iParam0 = 1;
			}
			else if ((PED::IS_PED_IN_COVER(Global_35, 0, 1) || PED::_0xD5FE956C70FF370B(Global_35)) && func_472(iParam0, 64))
			{
				*iParam0 = 3;
			}
			else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iParam0->f_2) && ANIMSCENE::_0x337F1CC8EE895601(iParam0->f_2, "Arthur"))
			{
				vVar0 = { iParam0->f_48 };
				iParam0->f_48 = { vVar0 };
				*iParam0 = 3;
			}
			else if (bParam4)
			{
				*iParam0 = 3;
			}
			break;
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_2, 0))
			{
				ANIMSCENE::START_ANIM_SCENE(iParam0->f_2);
			}
			if (func_86(iParam0->f_3, 4))
			{
				func_213(&(iParam0->f_17), 1, 1);
			}
			iParam0->f_37 = iParam0->f_39;
			iParam0->f_38 = iParam0->f_40;
			iParam0->f_18 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			iParam0->f_21 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			iParam0->f_24 = CAM::GET_FINAL_RENDERED_CAM_FOV();
			if (func_472(iParam0, 8192) && CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				func_302(iParam0, 16384);
				iParam0->f_44 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, iParam0->f_31, iParam0->f_34, iParam0->f_24, true, 2);
			}
			else
			{
				iParam0->f_44 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, iParam0->f_18, iParam0->f_21, iParam0->f_24, true, 2);
			}
			CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_41, iParam0->f_38, 0f, iParam0->f_37, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
			CAM::SET_CAM_NEAR_CLIP(iParam0->f_44, 0f);
			CAM::SHAKE_CAM(iParam0->f_44, "HAND_SHAKE", 0.2f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
			MAP::DISPLAY_RADAR(false);
			*iParam0 = 4;
			break;
		case 4:
			if (ANIMSCENE::_0x25557E324489393C(iParam0->f_2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_exit"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_exit");
			}
			if ((ANIMSCENE::_0x25557E324489393C(iParam0->f_2) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_exit_alt")) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_exit_alt"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_exit_alt");
			}
			if (!CAM::DOES_CAM_EXIST(iParam0->f_44) || !CAM::IS_CAM_INTERPOLATING(iParam0->f_44))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_44))
				{
					func_478(&uVar52, &uVar53, &iVar54, &iVar55, 529461124, 1410914475, -1497929239, 665185216, 2);
					if (iParam0->f_4 == iVar54 && iParam0->f_5 == iVar55)
					{
						if (iParam0->f_6 < MISC::GET_GAME_TIMER())
						{
							iParam0->f_4 = 0;
							iParam0->f_5 = 0;
						}
					}
					else
					{
						iParam0->f_4 = iVar54;
						iParam0->f_5 = iVar55;
						iParam0->f_6 = MISC::GET_GAME_TIMER() + 4000;
					}
					iParam0->f_10.f_2 = (-(BUILTIN::TO_FLOAT(iVar54) / 127f) * IntToFloat(iParam0->f_7));
					iParam0->f_10.f_1 = ((-iParam0->f_10.f_2 * IntToFloat(iParam0->f_9)) / IntToFloat(iParam0->f_7));
					if (PAD::IS_LOOK_INVERTED())
					{
						iParam0->f_10 = ((BUILTIN::TO_FLOAT(iVar55) / 127f) * IntToFloat(iParam0->f_8));
					}
					else
					{
						iParam0->f_10 = (-(BUILTIN::TO_FLOAT(iVar55) / 127f) * IntToFloat(iParam0->f_8));
					}
					fVar56 = (30f * BUILTIN::TIMESTEP());
					vVar57 = { iParam0->f_10 };
					iParam0->f_13 = (iParam0->f_13 + func_479((((vVar57.x - iParam0->f_13) * 0.05f) * fVar56), -3f, 3f));
					iParam0->f_13.f_1 = (iParam0->f_13.f_1 + func_479((((vVar57.y - iParam0->f_13.f_1) * 0.05f) * fVar56), -3f, 3f));
					iParam0->f_13.f_2 = (iParam0->f_13.f_2 + func_479((((vVar57.z - iParam0->f_13.f_2) * 0.05f) * fVar56), -3f, 3f));
					CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_41, Vector(iParam0->f_37, 0f, iParam0->f_38) + iParam0->f_13, iParam0->f_24, 0, 1, 1, 2, 1, 0);
				}
				if (!ANIMSCENE::_0x25557E324489393C(iParam0->f_2) || ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_exit"))
				{
					if (bParam2 || (((!func_86(iParam0->f_3, 4) && !func_476(iParam0->f_17, 1)) && !PAD::IS_CONTROL_PRESSED(0, -1053137564)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, -1053137564)))
					{
						if ((func_86(iParam0->f_3, 8) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_exit_alt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_exit_alt"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, "pbl_exit_alt", true);
						}
						else if (ANIMSCENE::_0x25557E324489393C(iParam0->f_2))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, "pbl_exit", true);
						}
						if (CAM::DOES_CAM_EXIST(iParam0->f_44))
						{
							if (func_472(iParam0, 16384))
							{
								CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_31, iParam0->f_34, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
							else if (func_88(iParam0->f_25))
							{
								CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_18, iParam0->f_21, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
							else
							{
								CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_25, iParam0->f_28, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
						}
						iParam0->f_13 = { 0f, 0f, 0f };
						*iParam0 = 5;
					}
				}
			}
			break;
		case 5:
			if (CAM::DOES_CAM_EXIST(iParam0->f_44))
			{
				if (CAM::IS_CAM_INTERPOLATING(iParam0->f_44))
				{
					return 0;
				}
				else if (func_88(iParam0->f_25))
				{
					func_480(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam0->f_18, iParam0->f_21.f_2, 0f, 10f, 0f));
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					CAM::DESTROY_CAM(iParam0->f_44, false);
				}
				else
				{
					func_480(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam0->f_25, iParam0->f_28.f_2, 0f, 10f, 0f));
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					CAM::DESTROY_CAM(iParam0->f_44, false);
				}
			}
			if ((((!ANIMSCENE::_0x25557E324489393C(iParam0->f_2) || ANIMSCENE::_0xF94692EB9DC15D74(iParam0->f_2, 0)) || ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_2, 0)) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_2, 0)) || (func_472(iParam0, 16) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -180478719)))
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_2))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_2);
				}
				if (func_472(iParam0, 4096))
				{
					PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", iParam0->f_47, -1);
					func_475(iParam0, 4096);
				}
				if (func_472(iParam0, 32) && !func_472(iParam0, 128))
				{
					func_475(iParam0, 32);
					PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 0);
					*iParam0 = 6;
				}
				else
				{
					MAP::DISPLAY_RADAR(true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(iParam0->f_44))
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
						CAM::DESTROY_CAM(iParam0->f_44, false);
					}
					if (bParam2)
					{
						*iParam0 = 7;
					}
					else if (bParam3)
					{
						func_208(iParam0->f_17, 1, 1);
						*iParam0 = 0;
					}
					else
					{
						*iParam0 = 7;
					}
				}
			}
			break;
		case 6:
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
				CAM::DESTROY_CAM(iParam0->f_44, false);
				if (bParam2)
				{
					*iParam0 = 7;
				}
				else if (bParam3)
				{
					func_208(iParam0->f_17, 1, 1);
					*iParam0 = 0;
				}
				else
				{
					*iParam0 = 7;
				}
			}
			break;
		case 7:
			if (CAM::DOES_CAM_EXIST(iParam0->f_44))
			{
				CAM::DESTROY_ALL_CAMS(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				CAM::DESTROY_CAM(iParam0->f_44, false);
				CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
			}
			if (((!bParam1 && ANIMSCENE::_0x25557E324489393C(iParam0->f_2)) && !ANIMSCENE::_0x1F0E401031E20146(iParam0->f_2, "pbl_exit")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_exit"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, "pbl_exit", true);
			}
			if ((((bParam1 || !ANIMSCENE::_0x25557E324489393C(iParam0->f_2)) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_2, 0)) || ANIMSCENE::_0xF94692EB9DC15D74(iParam0->f_2, 0)) || ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_2, 0))
			{
				if (func_205(iParam0->f_17))
				{
					func_213(&(iParam0->f_17), 1, 1);
				}
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_2))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_2);
				}
				if (func_472(iParam0, 32))
				{
					if (!func_472(iParam0, 128))
					{
						PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 0);
					}
					func_475(iParam0, 32);
				}
				if (func_472(iParam0, 4096))
				{
					PED::_0x437C08DB4FEBE2BD(Global_35, "Stealth", iParam0->f_47, -1);
					func_475(iParam0, 4096);
				}
				if (iParam5 == 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

void func_304()
{
	if (!func_115(4))
	{
		if (func_14(Local_29.f_3, iLocal_14) != 1)
		{
			func_481(Local_29.f_3, iLocal_14, 1, 0, 0);
		}
		func_183(&iLocal_591, 4);
	}
}

void func_305()
{
	if (func_115(2048))
	{
		if (!func_115(8192))
		{
			if (func_284(&uLocal_765))
			{
				if (func_272(&uLocal_765, 1.5f))
				{
					func_109(8192);
					func_454(1, 0, 0, 0, &(uLocal_600[2]), 0, 1065353216, 0);
				}
			}
			else
			{
				func_263(&uLocal_765);
			}
		}
	}
	if (func_115(1024))
	{
		if (!func_115(4096))
		{
			if (func_284(&uLocal_768))
			{
				if (func_272(&uLocal_768, 1.5f))
				{
					func_109(4096);
					func_454(3, 0, 0, "RE_HONOR_VOYEURISM", &(uLocal_600[2]), 0, 1065353216, 0);
				}
			}
			else
			{
				func_263(&uLocal_768);
			}
		}
	}
}

bool func_306(int iParam0)
{
	return func_86(iLocal_593, iParam0);
}

void func_307(int iParam0)
{
	if (!func_306(iParam0))
	{
		func_183(&iLocal_593, iParam0);
	}
}

char* func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "RE_PT_STR_V1_MUTTER_A";
				case 2:
					return "RE_PT_STR_V1_LOOK_INSIDE";
				case 4:
					return "RE_PT_STR_V1_PLAYER_REACT";
				case 8:
					return "RE_PT_STR_V1_PLAYER_REACT_POST";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "RE_PT_VAL_V1_MUTTER_A";
				case 2:
					return "RE_PT_VAL_V1_LOOK_INSIDE";
				case 4:
					return "RE_PT_VAL_V1_PLAYER_REACT";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "RE_PT_VAL_V2_MUTTER_A";
				case 2:
					return "RE_PT_VAL_V2_LOOK_INSIDE";
				case 4:
					return "RE_PT_VAL_V2_PLAYER_REACT";
				default:
					break;
			}
			break;
	}
	return "INVALID_STRING";
}

int func_309(var uParam0)
{
	if (!func_284(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_296(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_438() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

float func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2f;
		case 1:
			return -2f;
		case 2:
			return -2f;
		default:
			break;
	}
	return 0f;
}

bool func_311(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_312(int iParam0, int iParam1)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_313(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

char* func_314(char* sParam0)
{
	return sParam0;
}

int func_315(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_316(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && iParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_317(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_318(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_319(var uParam0)
{
	if (func_205(uParam0->f_162))
	{
		func_213(&(uParam0->f_162), 1, 1);
	}
	if (func_205(uParam0->f_163))
	{
		func_213(&(uParam0->f_163), 1, 1);
	}
	if (func_205(uParam0->f_164))
	{
		func_213(&(uParam0->f_164), 1, 1);
	}
	if (func_205(uParam0->f_165))
	{
		func_213(&(uParam0->f_165), 1, 1);
	}
}

void func_320(var uParam0)
{
	if (uParam0->f_170)
	{
		func_482();
	}
}

void func_321(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_483(32);
		func_325(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_322(var uParam0)
{
	if (func_484(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_485(uParam0->f_3);
		func_221(uParam0, 0, 1);
		func_486(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_487(0, 0);
		return 1;
	}
	return 0;
}

void func_323()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_324(int iParam0)
{
	if (!func_177(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_313(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_326() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_326()
{
	return Global_1572887->f_12;
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_329(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_330(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_88(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_331(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_34("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_332(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_333(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_88(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_244(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_488(iVar0, bParam8);
	return iVar0;
}

void func_334(int iParam0)
{
	if (!func_177(iParam0))
	{
		return;
	}
	func_489(iParam0);
}

void func_335(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_336(int iParam0)
{
	if (func_98(iParam0, 2))
	{
		return 200;
	}
	if (func_98(iParam0, 4))
	{
		return 70;
	}
	if (func_98(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

bool func_337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_328(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_338(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_88(vParam1))
	{
		return 0;
	}
	if (func_343(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_143(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_339(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_340(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_156(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_346(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_438();
			uParam4->f_2 = func_136(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_346(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_438();
		uParam4->f_2 = func_136(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_341(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_438() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_342(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_88(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_343(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_49(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_490(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_49(iParam0, 33554432))
	{
		if (func_491(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_98(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_49(iParam0, 1) && !func_49(iParam0, 2))
	{
		if (func_49(iParam0, 4096) || func_49(iParam0, 2048))
		{
			if (func_492(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_345(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_2(&uParam0);
	if (!func_493())
	{
		return 0;
	}
	return 1;
}

bool func_346(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_494(vVar0, vParam0) > func_494(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_347(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_350(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_495(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_351()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_352(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_326() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_354()
{
	return Global_1897952->f_41;
}

bool func_355(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_356(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_496(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_357(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_195(&uParam1))
	{
		return 1;
	}
	if (!func_196(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_358(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_359(var uParam0)
{
	return func_86(*uParam0, 4);
}

bool func_360(var uParam0)
{
	return func_86(*uParam0, 64);
}

bool func_361(var uParam0)
{
	return func_86(*uParam0, 8);
}

void func_362(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_363(var uParam0)
{
	return func_86(*uParam0, 128);
}

bool func_364(var uParam0)
{
	return func_86(*uParam0, 256);
}

void func_365(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_366(var uParam0)
{
	return func_86(*uParam0, 512);
}

bool func_367(var uParam0)
{
	return func_86(*uParam0, 1024);
}

bool func_368(var uParam0)
{
	return func_86(*uParam0, 2048);
}

void func_369(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

int func_370(int iParam0)
{
	return iParam0;
}

void func_371(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_372(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_497(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_373(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_375(int iParam0)
{
	if (!func_498(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

int func_376(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_499(1);
	}
	else
	{
		uVar0 = func_500(iParam0);
	}
	return uVar0;
}

void func_377(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_501(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_502(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_98(iParam0, 8192))
	{
		iVar0 = func_502(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_379(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_325(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_380(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_49(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_503(262144, iVar0, 0, 1);
		}
	}
	if (func_49(iParam0, 128))
	{
		func_503(128, iVar0, 0, 1);
	}
	else if (func_49(iParam0, 524288))
	{
		func_503(524288, iVar0, 0, 1);
	}
	else if (func_49(iParam0, 536870912))
	{
		func_503(536870912, iVar0, 0, 1);
	}
	else if (func_49(iParam0, 4194304))
	{
		func_503(4194304, iVar0, 0, 1);
	}
	else if (func_49(iParam0, 8388608))
	{
		func_503(8388608, iVar0, 0, 1);
	}
}

void func_381(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_382(bool bParam0)
{
	if (!bParam0 && func_504(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_383()
{
	return Global_1310750->f_16037;
}

int func_384(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_385(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_177(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_505(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_506(Global_1393447, 1);
	func_507();
	func_508();
	func_509((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_438() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_510();
		if (iParam1 == -1)
		{
			if (func_4(iParam0, 1))
			{
				func_503(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_4(iParam0, 2))
			{
				func_503(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_4(iParam0, 4))
			{
				func_503(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_511(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_512(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_512((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_387(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_388(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_389(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_391(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_392()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_393(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_394(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_393(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_395() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_395()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_396(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397()
{
	return &Global_1899515;
}

int func_398(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_406(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_407()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	if (!func_411(iParam0))
	{
		return -1;
	}
	return func_514(func_513(iParam0));
}

bool func_409(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_410(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_411(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_412(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_413(int iParam0)
{
	return func_49(iParam0, Global_1310750->f_16072 | 64);
}

int func_414(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_416(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_417(var uParam0, float fParam1)
{
	if (!func_284(uParam0))
	{
		return 0;
	}
	if (func_285(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_418(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

void func_419(var uParam0, bool bParam1, int iParam2)
{
	func_515(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_516(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_97(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_233(1))
						{
							func_97(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_233(1) || *uParam0 & 8192 != 0))
				{
					func_184(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_517(uParam0))
			{
				uParam0->f_15 = func_438();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_438() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_518(uParam0);
}

int func_420(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_519(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_520(iParam0, iVar2) <= func_521(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_421(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_522(iParam2, 1, 1, 1, 0))
	{
		func_97(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_523(uParam1, 1);
	func_323();
}

int func_422(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_524(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_525(uParam1);
			if (func_526(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_527(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_523(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_523(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_528(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_525(uParam2);
		if (func_526(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_527(uParam2)
				{
					func_523(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_424(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_519(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_527(uParam1)
		{
			fVar3 = func_525(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_425(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_426(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_529(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_434(uParam2, iParam1))
			{
				func_523(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_427(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_530(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_434(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_523(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_428(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_531(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_523(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_523(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_532(iParam1, vVar0, vVar4))
					{
						func_523(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_523(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_532(iParam1, vVar0, vVar7))
					{
						func_523(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_429(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_519(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_533(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_534(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_535(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_536(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_537(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_430(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_431(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_538(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_539(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_433(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_434(var uParam0, int iParam1)
{
	if (func_540(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_435(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_448(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_436()
{
}

int func_437(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_541(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_438();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_136(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_438();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_438()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_439()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_438() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_440(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_521(uParam0);
	if (uParam0->f_12 > func_542(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_543(iParam1);
	iVar1 = func_544(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_441(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_545(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_442(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_546(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_547(uParam1, iParam0))
					{
						if (func_136(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_443(int iParam0, var uParam1)
{
	if (!func_548(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_444(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_445(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_446(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_438();
	}
	else if (func_438() - uParam1->f_4) > func_549(uParam1)
	{
		return func_550(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_447(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

float func_448(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_449(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_450(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_449(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_156(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_263(&(iParam1->f_13));
		}
		if (func_551(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_552(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_450(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_553(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_554(*uParam0, 1, 1);
						}
					}
					else if (func_555(iParam1, 22))
					{
						func_554(*uParam0, 0, 1);
					}
				}
				if (func_556(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_557(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_558(iParam8);
					if (func_559(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_560(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_561(iParam1, uParam3, fVar8);
					if (func_562(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_563(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_564(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_556(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_565(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_559(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_557(uParam0, func_556(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_558(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_563(uParam3, 0, 0, 1, 1);
					}
					func_566(iParam1, 1);
				}
				func_561(iParam1, uParam3, fVar8);
				if (func_564(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_567(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_451(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_568(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_261(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_326() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_453(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_569(iParam0, &iVar0, &iVar1);
	if (!func_570(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_571(iVar0, iVar1);
}

void func_454(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_326() != -1)
	{
		return;
	}
	if ((Global_36615 && func_460(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_572(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_573(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_574(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_573(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_455(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_227())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_253(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_448(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_263(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_575(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_576(func_271(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_456(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_395() - fParam1);
	func_470(uParam0, 1);
	func_469(uParam0, 2);
	uParam0->f_2 = 0f;
}

var func_457(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_458(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_553(uParam0);
		func_567(iParam1, uParam2);
	}
	func_577(*uParam0, 1, bParam4);
}

int func_459(int iParam0, int iParam1, int iParam2)
{
	if (!func_40(iParam0, 0, 1))
	{
		return 0;
	}
	switch (iLocal_14)
	{
		case 2:
			return func_578(iParam0, iParam1, &iLocal_592, iParam2, func_275(iParam2), func_294(iParam2), 0, 0, 1077936128, 0, 0, 1, 0, 0, -1082130432, 1, 291934926);
		case 1:
			return func_578(iParam0, iParam1, &iLocal_592, iParam2, func_275(iParam2), func_294(iParam2), 0, 0, 1077936128, 0, 0, 1, 0, 0, -1082130432, 1, 291934926);
		case 0:
			return func_578(iParam0, iParam1, &iLocal_592, iParam2, func_275(iParam2), func_294(iParam2), 0, 0, 1077936128, 0, 0, 1, 0, 0, -1082130432, 1, 291934926);
		default:
			break;
	}
	return 0;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

bool func_461(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157.9196f;
		case 1:
			return 123.2165f;
		case 2:
			return 120.6433f;
		default:
			break;
	}
	return 120.6433f;
}

int func_463(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 == -1 || iParam4 >= *uParam0)
	{
		iParam4 = (*uParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (!PED::IS_PED_INJURED(uParam0[iVar0]))
		{
			if (func_253(uParam0[iVar0], bParam2, 1) < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_464(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_465(int iParam0, int iParam1)
{
	if (func_40(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_466(float fParam0)
{
	if (func_579(1))
	{
		return 1;
	}
	if (func_284(&uLocal_0) && !func_272(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

void func_467(int iParam0, int iParam1)
{
	func_495(iParam0, iParam1);
}

void func_468(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_580(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_581(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_470(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_471(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	uVar1 = func_582(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, iParam11, bParam12, bParam14, bParam15);
	func_38(iVar0);
	return uVar1;
}

bool func_472(var uParam0, int iParam1)
{
	return func_86(uParam0->f_3, iParam1);
}

int func_473(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_474(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_497(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_583(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_475(var uParam0, int iParam1)
{
	if (func_86(uParam0->f_3, iParam1))
	{
		func_467(&(uParam0->f_3), iParam1);
	}
}

bool func_476(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_205(iParam0))
	{
		return false;
	}
	iVar0 = func_370(iParam0);
	if (!HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1945938)[iVar0 /*18*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_477(int iParam0)
{
	if (func_40(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_478(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

float func_479(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_480(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_584(vParam0);
		func_585(vParam0);
	}
}

void func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			func_586(iParam0, iParam1, iVar0);
			func_588(iParam0, iParam1, func_587(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_586(iParam0, iParam1, iParam4);
		func_588(iParam0, iParam1, func_587(iParam3));
	}
	func_43(iParam0, iParam1, iParam2);
	func_589(iParam0, iParam1, func_499(1));
	func_590(iParam0, iParam1, func_397());
}

void func_482()
{
	func_591(23);
}

void func_483(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_484(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_485(int iParam0)
{
	int iVar0;

	iVar0 = func_592(iParam0);
	if (iVar0 != 0)
	{
		func_593(-1, 24, 0, iVar0);
	}
}

void func_486(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_595(func_594(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_49(iParam0, 2))
	{
		func_596(iParam0, func_376(iParam3));
	}
	if (func_49(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_354();
		}
		func_597(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_98(iParam0, 65536))
	{
		func_598(iParam0, iParam1);
		func_599(iParam0, func_164(iParam0, iParam1));
		func_483(128);
	}
	func_379(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_380(iParam0, 1);
	if (!bParam2)
	{
		func_483(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_600(524288);
	}
	if (func_601(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_601(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_487(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_602(&Global_0, 8);
	}
	if (!func_603() || func_326() != -1)
	{
		return;
	}
	func_602(&Global_0, 1);
}

int func_488(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_489(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_490(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_88(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_491(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_88(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_492(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_88(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_144(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_493()
{
	int iVar0;
	int iVar1;

	iVar0 = func_604(func_3());
	if (iVar0 == 8)
	{
		iVar1 = func_239(func_3());
		if (func_241(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_605(func_499(0)))
	{
		return 0;
	}
	if (func_606())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_494(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_495(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_496(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_607(iParam1))
		{
			func_608(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_278(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_609(iParam0, 0);
			bVar0 = true;
		}
		func_610(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_497(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

bool func_498(int iParam0)
{
	return func_497(iParam0, 2);
}

int func_499(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_611(1, 0, 0);
	}
	else
	{
		iVar0 = func_3();
	}
	return func_500(iVar0);
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_501(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_502(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_503(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_332(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_324(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_612(iVar0) < func_613(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_379(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_504(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_614(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_505(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_506(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_507()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_615(iVar0, 128))
		{
			func_616(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_508()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_615(iVar0, 128) && func_615(iVar0, 1))
		{
			func_616(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_509(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_510()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_49(iVar0, 16777216))
		{
			if (!func_617(iVar0))
			{
				func_618(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_511(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_325(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_325(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_325(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_325(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_325(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_325(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_325(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_512(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_395();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_513(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_514(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_515(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_619();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_620(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_516(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_517(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_326() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_621(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_621(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_544(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_518(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_622(uParam0);
	}
}

int func_519(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_544(iParam2);
	}
	else
	{
		iVar1 = func_543(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_544(iParam0);
	}
	else
	{
		iVar0 = func_543(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_4(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_520(int iParam0, int iParam1)
{
	return func_448(iParam0, iParam1, 1, 1);
}

float func_521(var uParam0)
{
	return uParam0->f_26;
}

int func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_523(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_97(uParam0, 134217728);
	}
	else
	{
		func_184(uParam0, 134217728);
	}
}

int func_524(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_448(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_623(iVar0, 0)))
		{
			if (func_624(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_525(var uParam0)
{
	return uParam0->f_17;
}

int func_526(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_4(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_527(var uParam0)
{
	return uParam0->f_18;
}

int func_528(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_623(iVar0, 0)))
		{
			if (func_625(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_529(var uParam0)
{
	return uParam0->f_23;
}

int func_530(var uParam0)
{
	return uParam0->f_21;
}

int func_531(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_532(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_461(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_533(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_626(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_535(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_234(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_536(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_234(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_537(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_234(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_538(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_539(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_627(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_540(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_541(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_136(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_542(var uParam0)
{
	return uParam0->f_24;
}

int func_543(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_544(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_545(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_538(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_448(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_448(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_546(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_406(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_547(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_547(uParam1, iVar1))
				{
					if (func_136(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_547(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_548(int iParam0)
{
	if (func_628())
	{
		return 0;
	}
	return func_629(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_549(var uParam0)
{
	return uParam0->f_20;
}

int func_550(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_551(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_630(iParam0, uParam1))
		{
			if (!func_4(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_563(uParam2, 0, 0, 1, 0);
				func_97(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_4(uParam1->f_10, 1))
		{
			func_631(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_184(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_552(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_4(iParam4, 32);
		func_632(iParam1, uParam2, 0);
		iVar5 = func_633(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_563(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_4(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_4(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_4(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_4(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_4(iParam4, 8388608) || func_4(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_4(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_4(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_555(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_555(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_4(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_634(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_4(iParam4, 268435456))
			{
				iVar8 = func_635(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_636(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_555(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_4(iParam4, 2) || func_4(iParam4, 16))
			{
				func_554(*uParam0, 1, 1);
			}
			else
			{
				func_554(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_553(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_554(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_555(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_556(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_637(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_557(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_638(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_4(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_558(int iParam0)
{
	if (func_4(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_4(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_4(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_559(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_639(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_640(Global_35)) || func_641(Global_35)) || func_642(Global_35));
	fVar12 = -1f;
	if (func_284(&(iParam1->f_13)))
	{
		fVar12 = func_285(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_205(((*uParam4)[iVar0 /*17*/])->f_6);
		func_643(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_644(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_645(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_563(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_112(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_632(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_646(iParam1, fParam6, iParam1->f_9))
					{
						func_263(&(iParam1->f_18));
						if (bVar6)
						{
							func_112(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_647(iParam1, fParam2);
	}
	return bVar5;
}

void func_560(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_561(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_648((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_647(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_562(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_649(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_650(iParam1, 0);
				func_632(iParam1, uParam2, func_555(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

void func_563(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_205(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_213(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_564(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_263(&(iParam1->f_18));
			return 0;
		}
		else if (func_284(&(iParam1->f_18)))
		{
			func_300(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_284(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_272(&(iParam1->f_18), fParam2);
	return 1;
}

void func_565(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_643(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_566(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_567(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_632(iParam0, uParam1, 1);
	func_563(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_568(int* iParam0)
{
	if (func_555(iParam0, 0))
	{
		if (func_258(iParam0))
		{
			func_566(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_569(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_570(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_651(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_652(iParam0))
	{
		return 0;
	}
	if (func_653(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_654(iParam0, 1)) || func_655(32768))
	{
		if (!func_654(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_656())
	{
		return 0;
	}
	return 1;
}

void func_571(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_573(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_657();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_658(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_659(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_628())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_660(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_657();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_661(iVar1);
		func_663(func_662(), 0, 4000);
		func_664(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_665(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_595(func_594(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_572(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_666(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_667(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_667(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_595(func_594(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_572(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_666(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_667(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_667(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_594(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_668(10, 1);
	}
}

void func_574(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_575(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_576(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_577(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_578(int iParam0, int iParam1, int* iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, int iParam15, int iParam16)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	if (bParam12)
	{
		bVar0 = MISC::IS_BIT_SET(*iParam2, iParam3);
	}
	else
	{
		bVar0 = func_669(*iParam2, iParam3);
	}
	if (!bVar0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam4))
	{
		if (!func_286(fParam8, 1, 0, 0))
		{
			if (bParam7)
			{
				func_670(0);
			}
			else
			{
				return 0;
			}
		}
		if (bParam9)
		{
			AUDIO::PLAY_PAIN(iParam0, iParam10, 0f, bParam11, false);
		}
		if (!bParam13)
		{
			func_261(iParam0, iParam1, sParam5, sParam6, fParam14, 0, 0, 0, 1, 1, iParam15, iParam16, 1, 0, 0);
		}
		else
		{
			func_271(iParam0, sParam5, -435184212, 0, 1, 0, 0, 1);
		}
		if (!bParam12)
		{
			func_349(iParam2, iParam3);
		}
		else
		{
			MISC::SET_BIT(iParam2, iParam3);
		}
		return 1;
	}
	return 0;
}

bool func_579(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_580(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_581(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_582(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = uVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_671(iVar2, bParam4, bParam6, uParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_672(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_583(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, uParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, uParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, uParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_372(iParam0, 1);
	func_373(iParam0, 1);
	func_374(iParam0, 128);
}

void func_584(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1935630->f_12)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1065353216);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
	}
}

void func_585(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!Global_1935630->f_12)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
	}
}

void func_586(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_150(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_3 = iParam2;
}

int func_587(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	PED::_0xCB1A3864C524F784(iParam0, iVar0);
	return iVar0;
}

void func_588(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_150(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_2 = uParam2;
}

void func_589(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_150(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_4 = uParam2;
}

void func_590(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_150(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_5 = iParam2;
}

void func_591(int iParam0)
{
	int iVar0;

	if (func_326() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_148(func_673(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_673(iVar0), func_351(), 1))
			{
				func_674(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_593(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_675() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_675();
					}
					func_676(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_184(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_594(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_595(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_596(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_501(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_502(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_597(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_98(iParam0, 8192))
	{
		iVar0 = func_502(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_598(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_328(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_599(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_49(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_88(vParam1))
	{
		return;
	}
	if (!func_177(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_88(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_339(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_600(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_618(iVar0, iParam0);
		iVar0++;
	}
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_602(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_603()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_604(int iParam0)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_605(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_606()
{
	return Global_1894899 & 2 != 0;
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_608(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_677(iParam0, iParam1))
		{
			if (func_678(iParam0, iParam1))
			{
				if (func_679(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_680(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_609(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_610(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_611(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(iParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_681(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_612(int iParam0)
{
	if (func_177(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_613(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_614(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_615(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_616(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_617(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_618(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_619()
{
	if (func_682())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_620(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_621(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_622(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_184(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_97(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_623(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_624(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_625(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_625(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_626(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_627(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_628()
{
	if (func_326() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_629(int iParam0, bool bParam1)
{
	switch (func_683(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_630(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_684((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_631(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_648((*uParam0)[iVar0 /*17*/]))
		{
			func_211((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_632(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_213(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_685(iParam0, 0);
		}
	}
}

int func_633(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_686(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_205(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_211((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_634(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_317(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_635(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_636(int* iParam0, int* iParam1)
{
	if (!func_555(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_211(iParam1, 19);
			func_650(iParam0, 23);
			func_687(iParam1, 2);
		}
	}
}

int func_637(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_688(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_689(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_638(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_686(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_639(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_640(int iParam0)
{
	return (func_690(iParam0, 4) || func_690(iParam0, 5));
}

int func_641(int iParam0)
{
	return func_690(iParam0, 7);
}

int func_642(int iParam0)
{
	return func_690(iParam0, 6);
}

void func_643(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_648(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_686(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_644(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_691(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_692(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_208(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_208(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_693(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_645(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_694(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_695(iParam1, 1))
	{
		func_696(iParam1, 1);
		return 1;
	}
	return 0;
}

int func_646(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_647(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_648(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_649(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_650(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_651(int iParam0, int iParam1)
{
	if (func_326() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_652(int iParam0)
{
	if (func_326() != -1)
	{
		if (func_654(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_654(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_654(iParam0, 65536) && !func_654(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_654(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_654(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_654(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_655(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_656()
{
	return Global_1905944->f_5694;
}

int func_657()
{
	int iVar0;

	iVar0 = func_697();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_658(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_326() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_156(MISC::ABSF(fVar1) < 1f, func_156(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_659(int iParam0)
{
	if (!func_698(iParam0))
	{
		return 0;
	}
	return func_699(iParam0);
}

int func_660(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_662()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_663(int iParam0, bool bParam1, int iParam2)
{
	func_700((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_701(iParam0);
}

void func_664(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_702(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_665(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_703(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_704(iVar5, &iVar2, &iVar0))
			{
				if (!func_705(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_706(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_707(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_657() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_657() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_708();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_666(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_667(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_709(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_668(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_710(iParam0))
	{
		return 0;
	}
	if (!func_603())
	{
		return 0;
	}
	if (!func_711(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_669(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_670(int iParam0)
{
	func_300(&uLocal_0);
	func_712(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_713();
}

int func_671(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (uParam3 && func_714(iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_715(iParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_672(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_673(int iParam0)
{
	if (!func_716(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_674(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_717(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_675()
{
	return &Global_1899515;
}

void func_676(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_718(*uParam0);
	iVar1 = func_719(*uParam0);
	iVar2 = func_720(*uParam0);
	iVar3 = func_398(*uParam0);
	iVar4 = func_721(*uParam0);
	iVar5 = func_722(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_723(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_723(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_724(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_677(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_678(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_679(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_677(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_680(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_681(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_682()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_683(int iParam0)
{
	if (!func_411(iParam0))
	{
		return -1;
	}
	return func_725(iParam0);
}

int func_684(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_685(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_300(&(uParam0->f_18));
}

void func_686(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_205(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_213(&(iParam1->f_6), 0, 1);
	}
	if (!func_205(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_648(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_726(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_205(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_693(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_727(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_728(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_206(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_727(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_208(iParam1->f_6, 0, 1);
				}
				else
				{
					func_208(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_687(int* iParam0, int iParam1)
{
	if (!func_210(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_211(iParam0, 14);
		}
	}
}

bool func_688(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_689(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_690(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_691(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_692(int iParam0, int iParam1)
{
	if (iParam1 && !func_205(iParam0))
	{
		return false;
	}
	return !func_497(iParam0, 4);
}

void func_693(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_205(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	func_727(iParam0, 18, 0, 1);
	func_727(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_694(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_205(iParam0))
	{
		return false;
	}
	iVar0 = func_370(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_695(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_205(iParam0))
	{
		return false;
	}
	iVar0 = func_370(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_696(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

var func_697()
{
	return Global_40.f_11095.f_35;
}

int func_698(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_700(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_729(bParam1);
	}
}

void func_701(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_702(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_703(var uParam0)
{
	vector3 vVar0;

	if (!func_730(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_704(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_730(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_705(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_706(int iParam0)
{
	return iParam0;
}

int func_707(int iParam0)
{
	vector3 vVar0;

	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_708()
{
	int iVar0;

	iVar0 = func_657();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_709(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_710(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_711(int iParam0, var uParam1, var uParam2)
{
	if (!func_710(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_712(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_713()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

int func_714(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_351(), 1))
	{
		return 1;
	}
	return 0;
}

int func_715(int iParam0, bool bParam1)
{
	return func_731(iParam0, Global_1894899->f_2, bParam1);
}

bool func_716(int iParam0)
{
	return iParam0 > -1;
}

int func_717(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

var func_718(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_576(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_719(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_720(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_721(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_722(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_723(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_724(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_732(uParam0, iParam6);
	func_733(uParam0, iParam5);
	func_734(uParam0, iParam4);
	func_735(uParam0, iParam3);
	func_736(uParam0, iParam2);
	func_737(uParam0, iParam1);
}

int func_725(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_738(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_726(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_497(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_583(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_728(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_205(iParam0))
	{
		return;
	}
	iVar0 = func_370(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_729(bool bParam0)
{
	func_739(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_730(int iParam0, var uParam1)
{
	if (!func_740(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_731(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_741(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_742(iParam0, uVar0, iVar1, bParam2);
}

void func_732(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_733(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_734(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_719(*uParam0);
	iVar1 = func_718(*uParam0);
	if (iParam1 < 1 || iParam1 > func_723(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_735(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_736(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_737(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

void func_739(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_740(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_741(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_326() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_742(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _NAMESPACE48::_0x32A1E3B83D501096(iParam0);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = uParam1;
	iVar1 = uParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_743(iVar2) != 0 && _NAMESPACE48::_0x800DF3FC913355F3(func_744(iVar2)))
		{
			if (func_744(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_743(int iParam0)
{
	if (!func_745(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_744(int iParam0)
{
	if (!func_745(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

bool func_745(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

