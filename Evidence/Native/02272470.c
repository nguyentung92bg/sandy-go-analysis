/* IL2CPP: Dino.BusSand.App.GameApp.<Start>d__76$$MoveNext
bool Dino_BusSand_App_GameApp__Start_d__76__MoveNext (Dino_BusSand_App_GameApp__Start_d__76_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<Start>d__76$$MoveNext
   bool Dino_BusSand_App_GameApp__Start_d__76__MoveNext (Dino_BusSand_App_GameApp__Start_d__76_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__Start_d__76__MoveNext_2172470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
                    /* try { // try from 0227248c to 02372493 has its CatchHandler @ 022724b8 */
  if ((bRam0000000004f9b8ad & 1) == 0) {
                    /* try { // try from 02272494 to 023724d3 has its CatchHandler @ 02272468 */
    FUN_02132f7c(PTR_DAT_04cac558);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cab240);
                    /* catch() { ... } // from try @ 0227248c with catch @ 022724b8 */
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cac560);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cacd08);
    FUN_02132f7c(PTR_DAT_04cac5e0);
    FUN_02132f7c(PTR_DAT_04cacd10);
    FUN_02132f7c(PTR_DAT_04cacd18);
    FUN_02132f7c(PTR_DAT_04cac9e0);
    FUN_02132f7c(PTR_DAT_04caba20);
    bRam0000000004f9b8ad = 1;
  }
  puVar1 = PTR_DAT_04caba50;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04cacd18;
      Dino_BusSand_App_CrashContext__Step_216db44
                (*(undefined8 *)PTR_DAT_04caba20,*(undefined8 *)PTR_DAT_04cacd18);
      puVar1 = PTR_DAT_04cab240;
      if (*(int *)(*(long *)PTR_DAT_04cab240 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_BootTrace__Mark_214e018(*(undefined8 *)PTR_DAT_04cacd10,0);
      puVar2 = PTR_DAT_04cac5e0;
      lVar4 = *(long *)PTR_DAT_04cac5e0;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      puVar7 = *(undefined8 **)(lVar4 + 0xb8);
      uVar5 = *(undefined8 *)puVar3;
      lVar9 = puVar7[1];
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar7;
        lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cacd08,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar6 = lVar9;
        thunk_FUN_02134474(plVar6,lVar9);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_BootTrace__Run_214e420(uVar5,lVar9,0);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac558);
      System_Action_Int32Enum____ctor_35ef240(uVar5,lVar8,*(undefined8 *)PTR_DAT_04cac560,0);
      Dino_BusSand_App_Meta_AppUpdate__add_LateAnswer_2201a74(uVar5,0);
      if (lVar8 == 0) goto LAB_02272734;
      uVar5 = Dino_BusSand_App_GameApp__Boot_2165774(lVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_CrashContext__Step_216db44
                (*(undefined8 *)PTR_DAT_04caba20,*(undefined8 *)PTR_DAT_04cac9e0);
      if (lVar8 == 0) {
LAB_02272734:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = 0;
      *(undefined1 *)(lVar8 + 0x3a) = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

