/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<RunGuide>d__31$$MoveNext
bool Dino_BusSand_App_Meta_YachtRacingFeature__RunGuide_d__31__MoveNext (Dino_BusSand_App_Meta_YachtRacingFeature__RunGuide_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<RunGuide>d__31$$MoveNext
   bool Dino_BusSand_App_Meta_YachtRacingFeature__RunGuide_d__31__MoveNext
   (Dino_BusSand_App_Meta_YachtRacingFeature__RunGuide_d__31_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_YachtRacingFeature__RunGuide_d__31__MoveNext_225cabc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000004f9c01f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb41f0);
    FUN_02132f7c(PTR_DAT_04cb41f8);
    bRam0000000004f9c01f = 1;
  }
  puVar1 = PTR_DAT_04cb41f8;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar2,0);
    plVar5 = (long *)(param_1 + 0x28);
    *plVar5 = lVar2;
    thunk_FUN_02134474(plVar5,lVar2);
    if (lVar6 == 0) goto LAB_0235cc2c;
    uVar3 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(5,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(5,0);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
    puVar1 = PTR_DAT_04caa458;
    lVar2 = *plVar5;
    if (lVar2 == 0) goto LAB_0235cc2c;
    *(undefined1 *)(lVar2 + 0x10) = 0;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar4,lVar2,*(undefined8 *)PTR_DAT_04cb41f0,0);
    Dino_BusSand_App_UI_YachtRacingUi__OpenStart_21f7fb4(1,uVar4,0);
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
LAB_0235cc2c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

