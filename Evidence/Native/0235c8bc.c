/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<RunAutoOpen>d__30$$MoveNext
bool Dino_BusSand_App_Meta_YachtRacingFeature__RunAutoOpen_d__30__MoveNext (Dino_BusSand_App_Meta_YachtRacingFeature__RunAutoOpen_d__30_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<RunAutoOpen>d__30$$MoveNext
   bool Dino_BusSand_App_Meta_YachtRacingFeature__RunAutoOpen_d__30__MoveNext
   (Dino_BusSand_App_Meta_YachtRacingFeature__RunAutoOpen_d__30_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_YachtRacingFeature__RunAutoOpen_d__30__MoveNext_225c8bc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  lVar3 = param_1;
  if ((bRam0000000004f9c01e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb41d0);
    FUN_02132f7c(PTR_DAT_04cb41d8);
    lVar3 = FUN_02132f7c(PTR_DAT_04cb41e0);
    bRam0000000004f9c01e = 1;
  }
  puVar2 = PTR_DAT_04cb41e0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar3,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar3;
    lVar3 = thunk_FUN_02134474(plVar7,lVar3);
    if (lVar8 == 0) goto LAB_0235ca6c;
    lVar4 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar8);
    lVar3 = 0;
    if (lVar4 == 0) goto LAB_0235ca6c;
    iVar1 = *(int *)(lVar4 + 0x6c);
    lVar8 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar8);
    lVar3 = 0;
    if (lVar8 == 0) goto LAB_0235ca6c;
    *(undefined4 *)(lVar8 + 0x6c) = 0;
    uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
    puVar2 = PTR_DAT_04caa458;
    lVar3 = 0;
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lVar8 = *plVar7;
    if (lVar8 == 0) goto LAB_0235ca6c;
    *(undefined1 *)(lVar8 + 0x10) = 0;
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    if (iVar1 == 2) {
      System_Action___ctor_47b5ed0(uVar6,lVar8,*(undefined8 *)PTR_DAT_04cb41d0,0);
      lVar3 = Dino_BusSand_App_UI_YachtRacingUi__OpenStart_21f7fb4(0,uVar6,0);
    }
    else {
      System_Action___ctor_47b5ed0(uVar6,lVar8,*(undefined8 *)PTR_DAT_04cb41d8,0);
      lVar3 = Dino_BusSand_App_UI_YachtRacingUi__OpenRace_21f7cdc(0,0,uVar6,0);
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_0235ca6c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(lVar3);
}

