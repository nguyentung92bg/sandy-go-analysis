/* IL2CPP: Dino.BusSand.Core.StageEngine$$AbsorbInto
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AbsorbInto (Dino_BusSand_Core_StageEngine_o* __this, int32_t truckId, int32_t sampleStride, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$AbsorbInto
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AbsorbInto
   (Dino_BusSand_Core_StageEngine_o* __this, int32_t truckId, int32_t sampleStride, const
   MethodInfo* method); */

undefined8
Dino_BusSand_Core_StageEngine__AbsorbInto_24296b0
          (long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9cbb3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    FUN_02132f7c(PTR_DAT_04cbe688);
    FUN_02132f7c(PTR_DAT_04cbe5b8);
    FUN_02132f7c(PTR_DAT_04cbe5c0);
    bRam0000000004f9cbb3 = 1;
  }
  puVar3 = PTR_DAT_04cbe5c0;
  puVar2 = PTR_DAT_04cbe5b8;
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_GrainPoint____ctor_3a2676c(lVar5,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = Dino_BusSand_Core_Road__AbsorbColorInto_2416e64
                        (*(long *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x18),param_3,
                         lVar5,0);
      if ((int)uVar4 < 1) {
LAB_02529878:
        return *(undefined8 *)(param_1 + 0x98);
      }
      if (lVar5 != 0) {
        lVar7 = *(long *)(param_1 + 0x98);
        uStack_58 = System_Collections_Generic_List_GrainPoint___ToArray_3a28aa4
                              (lVar5,*(undefined8 *)PTR_DAT_04cbe688);
        uStack_68 = CONCAT44(param_2,0x10);
        uStack_60 = (ulong)uVar4;
        thunk_FUN_02134474(&uStack_58,uStack_58);
        if (lVar7 != 0) {
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar6 = *(long *)PTR_DAT_04cb58d0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar4 = *(uint *)(lVar7 + 0x18);
            if (uVar4 < *(uint *)(lVar5 + 0x18)) {
              lVar5 = lVar5 + (long)(int)uVar4 * 0x18;
              *(uint *)(lVar7 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar5 + 0x30) = uStack_58;
              *(ulong *)(lVar5 + 0x28) = uStack_60;
              *(undefined8 *)(lVar5 + 0x20) = uStack_68;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),0);
            }
            else {
              uStack_48 = uStack_60;
              uStack_50 = uStack_68;
              uStack_40 = uStack_58;
              System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                        (lVar7,&uStack_50,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            Dino_BusSand_Core_StageEngine__CheckColorsCleared_2425418
                      (param_1,*(undefined8 *)(param_1 + 0x98));
            Dino_BusSand_Core_StageEngine__CheckDunes_24255d0
                      (param_1,*(undefined8 *)(param_1 + 0x98));
            goto LAB_02529878;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

