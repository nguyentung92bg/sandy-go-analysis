/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckDunes
void Dino_BusSand_Core_StageEngine__CheckDunes (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckDunes
   void Dino_BusSand_Core_StageEngine__CheckDunes (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__CheckDunes_24255d0(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 uStack_b8;
  long alStack_a8 [2];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9cba5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed28);
    FUN_02132f7c(PTR_DAT_04cbed40);
    FUN_02132f7c(PTR_DAT_04cbed48);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbed60);
    FUN_02132f7c(PTR_DAT_04cbec28);
    bRam0000000004f9cba5 = 1;
  }
  puVar5 = PTR_DAT_04cbed40;
  puVar4 = PTR_DAT_04cbed28;
  puVar3 = PTR_DAT_04cb58d0;
  lVar6 = *(long *)(param_1 + 0x48);
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_70,lVar6,*(undefined8 *)PTR_DAT_04cbed60);
    bVar2 = false;
    lStack_80 = lStack_60;
    puStack_98 = &uStack_90;
    uStack_88 = uStack_68;
    uStack_90 = uStack_70;
    alStack_a8[1] = 0;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_90,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(lStack_80 + 0x50) == '\0') {
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((int)(uint)*(byte *)(lStack_80 + 0x14) < *(int *)(lVar6 + 0x18)) {
          iVar8 = *(int *)(lVar6 + (ulong)*(byte *)(lStack_80 + 0x14) * 4 + 0x20);
        }
        else {
          iVar8 = 0;
        }
        if (*(int *)(lStack_80 + 0x1c) <= *(int *)(lStack_80 + 0x18) - iVar8) {
          bVar2 = true;
          *(undefined1 *)(lStack_80 + 0x50) = 1;
          if (param_2 != 0) {
            alStack_a8[0] = 0;
            uStack_b8 = CONCAT44(*(undefined4 *)(lStack_80 + 0x10),0x1e);
            thunk_FUN_02134474(alStack_a8,0);
            lVar6 = *(long *)(param_2 + 0x10);
            lVar9 = *(long *)puVar3;
                    /* try { // try from 02525750 to 026258af has its CatchHandler @ 02525750
                       catch() { ... } // from try @ 02525750 with catch @ 02525750
                       catch() { ... } // from try @ 02525a1c with catch @ 02525750
                       catch() { ... } // from try @ 02525ac0 with catch @ 02525750
                       catch() { ... } // from try @ 02525b24 with catch @ 02525750
                       catch() { ... } // from try @ 02525b50 with catch @ 02525750 */
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar1 = *(uint *)(param_2 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
              *(uint *)(param_2 + 0x18) = uVar1 + 1;
              *(long *)(lVar6 + 0x30) = alStack_a8[0];
              *(undefined8 *)(lVar6 + 0x28) = 0;
              *(undefined8 *)(lVar6 + 0x20) = uStack_b8;
              thunk_FUN_02134474((long *)(lVar6 + 0x30),0);
            }
            else {
              uStack_68 = 0;
              uStack_70 = uStack_b8;
              lStack_60 = alStack_a8[0];
              System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                        (param_2,&uStack_70,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            bVar2 = true;
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar4);
    if (bVar2) {
      Dino_BusSand_Core_StageEngine__SyncBlockers_24221e0(param_1);
    }
  }
  return;
}

