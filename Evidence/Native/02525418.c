/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckColorsCleared
void Dino_BusSand_Core_StageEngine__CheckColorsCleared (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckColorsCleared
   void Dino_BusSand_Core_StageEngine__CheckColorsCleared (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__CheckColorsCleared_2425418(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  ulong uStack_88;
  undefined8 uStack_78;
  ulong auStack_70 [4];
  
  if ((bRam0000000004f9cba9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbbf98);
    FUN_02132f7c(PTR_DAT_04cbbfa8);
    bRam0000000004f9cba9 = 1;
  }
  puVar3 = PTR_DAT_04cbbfa8;
  puVar2 = PTR_DAT_04cb58d0;
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar8) {
        return;
      }
      uVar5 = System_Collections_Generic_List_byte___get_Item_39fa834
                        (lVar4,iVar8,*(undefined8 *)puVar3);
      lVar4 = *(long *)(param_1 + 0xa0);
      if (lVar4 == 0) break;
      uVar1 = (uint)uVar5 & 0xff;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      piVar6 = (int *)(lVar4 + (uVar5 & 0xff) * 4 + 0x20);
      if (*piVar6 == 1) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar4 == 0)) break;
        if ((*(int *)(lVar4 + 0x18) <= (int)uVar1) ||
           (*(int *)(lVar4 + (uVar5 & 0xff) * 4 + 0x20) == 0)) {
          *piVar6 = 0;
          uStack_78 = 0;
          uStack_88 = CONCAT44((uint)uVar5,0x12) & 0xffffffffff;
          thunk_FUN_02134474(&uStack_78,0);
          if (param_2 == 0) break;
          lVar4 = *(long *)(param_2 + 0x10);
          lVar7 = *(long *)puVar2;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar4 == 0) break;
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar4 + 0x30) = uStack_78;
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *(ulong *)(lVar4 + 0x20) = uStack_88;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),0);
          }
          else {
            auStack_70[1] = 0;
            auStack_70[0] = uStack_88;
            auStack_70[2] = uStack_78;
            System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                      (param_2,auStack_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      lVar4 = *(long *)(param_1 + 0x70);
      iVar8 = iVar8 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

