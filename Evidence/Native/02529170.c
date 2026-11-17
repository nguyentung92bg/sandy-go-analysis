/* IL2CPP: Dino.BusSand.Core.StageEngine$$ExpandRoadCapacity
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__ExpandRoadCapacity (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$ExpandRoadCapacity
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__ExpandRoadCapacity
   (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__ExpandRoadCapacity_2429170(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f9cbb0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    bRam0000000004f9cbb0 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      Dino_BusSand_Core_Road__ExpandCapacity_24129d0(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar5 = *(long *)(param_1 + 0x98);
        uStack_48 = 0;
        uStack_58 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38),0x13);
        uStack_50 = 0;
        thunk_FUN_02134474(&uStack_48,0);
        puVar3 = PTR_DAT_04cb58d0;
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          lVar7 = *(long *)PTR_DAT_04cb58d0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar6 + 0x30) = uStack_48;
              *(undefined8 *)(lVar6 + 0x28) = uStack_50;
              *(undefined8 *)(lVar6 + 0x20) = uStack_58;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),0);
            }
            else {
              uStack_38 = uStack_50;
              uStack_40 = uStack_58;
              uStack_30 = uStack_48;
              System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                        (lVar5,&uStack_40,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              lVar5 = *(long *)(param_1 + 0x98);
              uVar4 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
              if (*(long *)(param_1 + 0x20) != 0) {
                uStack_70 = CONCAT44(uVar4,0xf);
                uStack_60 = 0;
                uStack_68 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x38);
                thunk_FUN_02134474(&uStack_60,0);
                if (lVar5 != 0) {
                  lVar6 = *(long *)(lVar5 + 0x10);
                  lVar7 = *(long *)puVar3;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar6 != 0) {
                    uVar2 = *(uint *)(lVar5 + 0x18);
                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar2 * 0x18;
                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar6 + 0x30) = uStack_60;
                      *(ulong *)(lVar6 + 0x28) = uStack_68;
                      *(undefined8 *)(lVar6 + 0x20) = uStack_70;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),0);
                    }
                    else {
                      uStack_38 = uStack_68;
                      uStack_40 = uStack_70;
                      uStack_30 = uStack_60;
                      System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                                (lVar5,&uStack_40,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    }
                    if (((*(char *)(param_1 + 0x80) != '\0') && (*(char *)(param_1 + 0x81) == '\0'))
                       && (*(int *)(param_1 + 0x84) != 3)) {
                      *(undefined1 *)(param_1 + 0x80) = 0;
                    }
                    return *(undefined8 *)(param_1 + 0x98);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

