/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpecialLose$$Enqueue
void Dino_BusSand_App_Meta_BattleYachtSpecialLose__Enqueue (int32_t order, System_Action_Action__o* open, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpecialLose$$Enqueue
   void Dino_BusSand_App_Meta_BattleYachtSpecialLose__Enqueue (int32_t order,
   System_Action_Action__o* open, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleYachtSpecialLose__Enqueue_2227730(uint param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9bdff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c90);
    FUN_02132f7c(PTR_DAT_04cb2d28);
    FUN_02132f7c(PTR_DAT_04cb2d30);
    FUN_02132f7c(PTR_DAT_04cb2d38);
    FUN_02132f7c(PTR_DAT_04cb2d20);
    FUN_02132f7c(PTR_DAT_04cb2d40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb2d48);
    FUN_02132f7c(PTR_DAT_04cb2d50);
    bRam0000000004f9bdff = 1;
  }
  puVar2 = PTR_DAT_04cb2d40;
  puVar1 = PTR_DAT_04cb2c90;
  lStack_48 = 0;
  if (param_2 == 0) {
    return;
  }
  iVar11 = 0;
  while( true ) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar9 = **(long **)(lVar4 + 0xb8);
    if (lVar9 == 0) break;
    if (*(int *)(lVar9 + 0x18) <= iVar11) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
      }
      uStack_50 = (ulong)param_1;
      lStack_48 = param_2;
      thunk_FUN_02134474(&lStack_48,param_2);
      if (lVar9 != 0) {
        lVar4 = *(long *)(lVar9 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cb2d30;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            plVar5 = (long *)(lVar4 + 0x28);
            *plVar5 = lStack_48;
            *(ulong *)(lVar4 + 0x20) = uStack_50;
            thunk_FUN_02134474(plVar5,0);
          }
          else {
            System_Collections_Generic_List_BattleYachtSpecialLose_Entry___AddWithResize_3b105e8
                      (lVar9,uStack_50,lStack_48,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          puVar2 = PTR_DAT_04cb2d50;
          lVar4 = *(long *)PTR_DAT_04cb2d50;
          lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar2;
          }
          puVar7 = *(undefined8 **)(lVar4 + 0xb8);
          lVar8 = puVar7[1];
          if (lVar8 == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            }
            uVar10 = *puVar7;
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2d28);
            System_Comparison_BattleYachtSpecialLose_Entry____ctor_3329780
                      (lVar8,uVar10,*(undefined8 *)PTR_DAT_04cb2d48,0);
            plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar5 = lVar8;
            thunk_FUN_02134474(plVar5,lVar8);
          }
          if (lVar9 != 0) {
            System_Collections_Generic_List_BattleYachtSpecialLose_Entry___Sort_3b120f8
                      (lVar9,lVar8,*(undefined8 *)PTR_DAT_04cb2d38);
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            lVar4 = *(long *)puVar1;
            lVar9 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar1;
            }
            if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) != '\0') {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
            if ((uVar6 & 1) != 0) {
              return;
            }
            if (lVar9 != 0) {
              uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar9,0);
              if ((uVar6 & 1) == 0) {
                return;
              }
              lVar4 = *(long *)puVar1;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar4 = *(long *)puVar1;
              }
              *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 8) = 1;
              uVar10 = Dino_BusSand_App_Meta_BattleYachtSpecialLose__Run_2227a74();
              UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar9,uVar10,0);
              return;
            }
          }
        }
      }
      break;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar9 == 0) break;
    }
    uVar3 = System_Collections_Generic_List_BattleYachtSpecialLose_Entry___get_Item_3b102c8
                      (lVar9,iVar11,*(undefined8 *)puVar2);
    iVar11 = iVar11 + 1;
    if (uVar3 == param_1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

