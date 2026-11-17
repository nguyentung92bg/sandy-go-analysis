/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<RunGuide>d__167$$MoveNext
bool Dino_BusSand_App_Meta_PassportFeature__RunGuide_d__167__MoveNext (Dino_BusSand_App_Meta_PassportFeature__RunGuide_d__167_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<RunGuide>d__167$$MoveNext
   bool Dino_BusSand_App_Meta_PassportFeature__RunGuide_d__167__MoveNext
   (Dino_BusSand_App_Meta_PassportFeature__RunGuide_d__167_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PassportFeature__RunGuide_d__167__MoveNext_224af5c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam0000000004f9bf9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb3a88);
    FUN_02132f7c(PTR_DAT_04cb3a90);
    bRam0000000004f9bf9a = 1;
  }
  puVar1 = PTR_DAT_04cb3a90;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar2,0);
    plVar4 = (long *)(param_1 + 0x20);
    *plVar4 = lVar2;
    thunk_FUN_02134474(plVar4,lVar2);
    puVar1 = PTR_DAT_04caa458;
    lVar2 = *plVar4;
    if (lVar2 == 0) goto LAB_0234b074;
                    /* try { // try from 0234aff4 to 0244b0db has its CatchHandler @ 0234b1d4 */
    *(undefined1 *)(lVar2 + 0x10) = 0;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar3,lVar2,*(undefined8 *)PTR_DAT_04cb3a88,0);
    Dino_BusSand_App_UI_PassportUi__RunGuide_21db908(uVar3,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) != '\0') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_0234b074:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

