/* IL2CPP: Dino.BusSand.Core.StageEngine$$Terminate
void Dino_BusSand_Core_StageEngine__Terminate (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, bool cleared, int32_t reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$Terminate
   void Dino_BusSand_Core_StageEngine__Terminate (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, bool cleared, int32_t reason, const
   MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__Terminate_24268e4
               (long param_1,long param_2,byte param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  if ((bRam0000000004f9cbc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cbc4 = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(byte *)(param_1 + 0x81) = param_3 & 1;
  *(undefined4 *)(param_1 + 0x84) = param_4;
  puVar2 = PTR_DAT_04cb58d0;
  if (param_2 != 0) {
    if ((param_3 & 1) == 0) {
      uStack_50 = CONCAT44(param_4,0x15);
    }
    else {
      uStack_50 = _UNK_00e69738;
    }
    auStack_40[0] = 0;
    uStack_48 = 0;
    thunk_FUN_02134474(auStack_40,0);
    lVar4 = *(long *)puVar2;
    lVar3 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + 0x30) = auStack_40[0];
      *(undefined8 *)(lVar3 + 0x28) = uStack_48;
      *(undefined8 *)(lVar3 + 0x20) = uStack_50;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),0);
    }
    else {
      System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                (param_2,&uStack_50,
                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
  }
  return;
}

