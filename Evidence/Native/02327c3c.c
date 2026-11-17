/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpecialLose.<Run>d__8$$MoveNext
bool Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_d__8__MoveNext (Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpecialLose.<Run>d__8$$MoveNext
   bool Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_d__8__MoveNext
   (Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_d__8_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_d__8__MoveNext_2227c3c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x1;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000004f9be04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb2c90);
    FUN_02132f7c(PTR_DAT_04cb2d70);
    FUN_02132f7c(PTR_DAT_04cb2d20);
    FUN_02132f7c(PTR_DAT_04cb2d40);
    FUN_02132f7c(PTR_DAT_04cb2d78);
    FUN_02132f7c(PTR_DAT_04cb2d80);
    bRam0000000004f9be04 = 1;
  }
  puVar7 = PTR_DAT_04cb2d80;
  puVar6 = PTR_DAT_04cb2d78;
  puVar5 = PTR_DAT_04cb2d70;
  puVar4 = PTR_DAT_04cb2d40;
  puVar3 = PTR_DAT_04cb2c90;
  puVar2 = PTR_DAT_04caa458;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_02327e08;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return iVar1 == 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  while( true ) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    plVar10 = *(long **)(lVar9 + 0xb8);
    if (*plVar10 == 0) break;
    if (*(int *)(*plVar10 + 0x18) < 1) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        plVar10 = *(long **)(*(long *)puVar3 + 0xb8);
      }
      *(undefined1 *)(plVar10 + 1) = 0;
      return false;
    }
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
    System_Object___ctor_4870e5c(lVar9,0);
    plVar10 = (long *)(param_1 + 0x20);
    *plVar10 = lVar9;
    thunk_FUN_02134474(plVar10,lVar9);
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    if (**(long **)(lVar9 + 0xb8) == 0) break;
    System_Collections_Generic_List_BattleYachtSpecialLose_Entry___get_Item_3b102c8
              (**(long **)(lVar9 + 0xb8),0,*(undefined8 *)puVar4);
    if (**(long **)(*(long *)puVar3 + 0xb8) == 0) break;
    System_Collections_Generic_List_BattleYachtSpecialLose_Entry___RemoveAt_3b11e04
              (**(long **)(*(long *)puVar3 + 0xb8),0,*(undefined8 *)puVar5);
    lVar9 = *plVar10;
    if (lVar9 == 0) break;
    uVar8 = *(undefined8 *)puVar2;
    *(undefined1 *)(lVar9 + 0x10) = 0;
    uVar8 = thunk_FUN_0216e89c(uVar8);
    System_Action___ctor_47b5ed0(uVar8,lVar9,*(undefined8 *)puVar6,0);
    if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(extraout_x1 + 0x18))
              (*(undefined8 *)(extraout_x1 + 0x40),uVar8,*(undefined8 *)(extraout_x1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
LAB_02327e08:
    plVar10 = (long *)(param_1 + 0x20);
    if (*plVar10 == 0) break;
    if ((*(char *)(*plVar10 + 0x10) == '\0') &&
       (fVar12 = *(float *)(param_1 + 0x28), fVar12 < 600.0)) {
      fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(float *)(param_1 + 0x28) = fVar12 + fVar11;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return true;
    }
    *plVar10 = 0;
    thunk_FUN_02134474(plVar10,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

