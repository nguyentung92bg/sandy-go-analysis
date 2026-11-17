/* IL2CPP: Dino.BusSand.Core.StageEngine$$AddRescueTime
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AddRescueTime (Dino_BusSand_Core_StageEngine_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$AddRescueTime
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AddRescueTime
   (Dino_BusSand_Core_StageEngine_o* __this, float seconds, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__AddRescueTime_24293a0(undefined4 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f9cbb1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    bRam0000000004f9cbb1 = 1;
  }
  lVar3 = *(long *)(param_2 + 0x98);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar2) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar3 + 0x10),0,iVar2,0);
    }
    iVar2 = Dino_BusSand_Core_StageEngine__RescueTicks_2423258(param_1);
    if ((((*(char *)(param_2 + 0x80) == '\0') || (*(char *)(param_2 + 0x81) != '\0')) ||
        (*(int *)(param_2 + 0x84) != 3)) || (iVar2 < 1)) {
LAB_02529428:
      return *(undefined8 *)(param_2 + 0x98);
    }
    lVar3 = *(long *)(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0x80) = 0;
    uStack_48 = 0;
    *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0xe4) + iVar2;
    uStack_58 = CONCAT44(iVar2,0x21);
    thunk_FUN_02134474(&uStack_48,0);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar5 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + 0x30) = uStack_48;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined8 *)(lVar4 + 0x20) = uStack_58;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),0);
        }
        else {
          uStack_38 = 0;
          uStack_40 = uStack_58;
          uStack_30 = uStack_48;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (lVar3,&uStack_40,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_02529428;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

