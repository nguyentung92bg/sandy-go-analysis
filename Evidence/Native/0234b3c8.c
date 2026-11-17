/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<RunKeysFly>d__168$$MoveNext
bool Dino_BusSand_App_Meta_PassportFeature__RunKeysFly_d__168__MoveNext (Dino_BusSand_App_Meta_PassportFeature__RunKeysFly_d__168_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<RunKeysFly>d__168$$MoveNext
   bool Dino_BusSand_App_Meta_PassportFeature__RunKeysFly_d__168__MoveNext
   (Dino_BusSand_App_Meta_PassportFeature__RunKeysFly_d__168_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_PassportFeature__RunKeysFly_d__168__MoveNext_224b3c8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000004f9bf9c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb3ac8);
    FUN_02132f7c(PTR_DAT_04cb3ad0);
    bRam0000000004f9bf9c = 1;
  }
  puVar2 = PTR_DAT_04cb3ad0;
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar3,0);
    plVar6 = (long *)(param_1 + 0x28);
    *plVar6 = lVar3;
    thunk_FUN_02134474(plVar6,lVar3);
    lVar3 = *plVar6;
    if ((lVar3 == 0) || (*(undefined1 *)(lVar3 + 0x10) = 0, lVar7 == 0)) goto LAB_0234b560;
    uVar1 = *(undefined4 *)(lVar7 + 0x18);
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 0234b49c to 0244b4c3 has its CatchHandler @ 0234b5b4 */
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)PTR_DAT_04cb3ac8,0);
    uVar5 = Dino_BusSand_App_UI_PassportUi__PlayKeysGain_21dc8dc(uVar1,uVar4,0);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 0234b4c4 to 0244b5af has its CatchHandler @ 0234b284 */
      if (*plVar6 == 0) goto LAB_0234b560;
      *(undefined1 *)(*plVar6 + 0x10) = 1;
    }
  }
  puVar2 = PTR_DAT_04caef48;
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
      return 0;
    }
  }
LAB_0234b560:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

