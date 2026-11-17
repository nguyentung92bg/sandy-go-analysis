/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckSoftLock
void Dino_BusSand_Core_StageEngine__CheckSoftLock (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02526950) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckSoftLock
   void Dino_BusSand_Core_StageEngine__CheckSoftLock (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__CheckSoftLock_24267e8(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [3];
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xa8) < 1) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_025268e0;
  uVar3 = Dino_BusSand_Core_Road__FrozenAt_2412604
                    (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x78),0);
  if ((uVar3 & 1) == 0) {
    uVar3 = Dino_BusSand_Core_StageEngine__get_RoadEffectivelyFull_2426ad8(param_1);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_025268e0;
      uVar3 = Dino_BusSand_Core_Road__AnyBusLeavingMoving_24125c4
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x78),0x78,0);
      if ((uVar3 & 1) == 0) goto LAB_02526824;
    }
  }
  else {
LAB_02526824:
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_025268e0;
    if (*(int *)(param_1 + 0xb8) - *(int *)(*(long *)(param_1 + 0x18) + 0x70) <
        *(int *)(param_1 + 0xac)) {
      if (0 < *(int *)(param_1 + 0xe8)) {
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
        return;
      }
      if (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0xb0) < (long)*(int *)(param_1 + 0xa8)) {
        return;
      }
      if ((bRam0000000004f9cbc4 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb58d0);
        bRam0000000004f9cbc4 = 1;
      }
      *(undefined1 *)(param_1 + 0x80) = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
      *(undefined4 *)(param_1 + 0x84) = 2;
      puVar2 = PTR_DAT_04cb58d0;
      if (param_2 != 0) {
        auStack_40[0] = 0;
        uStack_50 = 0x200000015;
        uStack_48 = 0;
        thunk_FUN_02134474(auStack_40,0);
        lVar5 = *(long *)puVar2;
        lVar4 = *(long *)(param_2 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + 0x30) = auStack_40[0];
          *(undefined8 *)(lVar4 + 0x28) = uStack_48;
          *(undefined8 *)(lVar4 + 0x20) = uStack_50;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),0);
        }
        else {
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (param_2,&uStack_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      return;
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x70);
    return;
  }
LAB_025268e0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

