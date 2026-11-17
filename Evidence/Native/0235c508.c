/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$StartRace
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_YachtRacingFeature__StartRace (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$StartRace
   System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_YachtRacingFeature__StartRace
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_Meta_YachtRacingFeature__StartRace_225c508(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  puVar4 = PTR_DAT_04cb41c0;
  puVar3 = PTR_DAT_04cb41b8;
  if ((bRam0000000004f9c019 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb41b8);
    FUN_02132f7c(PTR_DAT_04cb41c0);
    bRam0000000004f9c019 = 1;
  }
  lVar10 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  uVar11 = Dino_BusSand_App_Meta_YachtRacingFeature__PlayerName_225b944();
  uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Func_object____ctor_379de3c(uVar12,param_1,*(undefined8 *)puVar4,0);
  uVar13 = Dino_BusSand_App_Meta_YachtRacingFeature__HeadIds_225c144();
  puVar3 = PTR_DAT_04cac018;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9bff1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb07f8);
    FUN_02132f7c(PTR_DAT_04cad280);
    bRam0000000004f9bff1 = 1;
  }
  puVar4 = PTR_DAT_04cb07f8;
  uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__get_FirstStartRewardId_225529c(lVar10);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  lVar7 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,uVar6,0);
  if (lVar7 == 0) {
    lVar7 = 0;
LAB_02357ee8:
    bVar2 = true;
LAB_02357eec:
    lVar14 = *(long *)(lVar10 + 0x10);
    if (lVar14 == 0) goto LAB_02357fc4;
    bVar5 = *(char *)(lVar14 + 0x80) != '\0';
  }
  else {
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar7,*(undefined8 *)PTR_DAT_04cad280,0);
    lVar7 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar8,0);
    if (lVar7 == 0) goto LAB_02357ee8;
    if (*(int *)(lVar7 + 0x18) != 0) {
      bVar2 = false;
      goto LAB_02357eec;
    }
    lVar14 = *(long *)(lVar10 + 0x10);
    if (lVar14 == 0) goto LAB_02357fc4;
    bVar5 = false;
    bVar2 = false;
  }
  lVar15 = *(long *)(lVar10 + 0x30);
  *(undefined1 *)(lVar14 + 0x80) = 0;
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
  }
  Dino_BusSand_App_Meta_YachtRacingCore__OnStartYachtRacing_22578a8(lVar10,uVar11,uVar12,uVar13);
  lVar10 = *(long *)(lVar10 + 0x28);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
  }
  if (!(bool)(bVar5 & (bVar2 ^ 1U))) {
    return (long *)0x0;
  }
  if (!bVar2) {
    if (*(int *)(lVar7 + 0x18) < 1) {
      return (long *)0x0;
    }
    plVar9 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar7,0,*(undefined8 *)PTR_DAT_04cb15c0);
    if ((bRam0000000004f9b7e0 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9b90,0);
      bRam0000000004f9b7e0 = 1;
    }
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04ca9b90 + 0x130);
      if (bVar1 <= *(byte *)(*plVar9 + 0x130)) {
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04ca9b90
           ) {
          return plVar9;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
LAB_02357fc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

