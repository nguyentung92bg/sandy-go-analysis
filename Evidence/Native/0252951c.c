/* IL2CPP: Dino.BusSand.Core.StageEngine$$AbsorbColorIntoRoadBus
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__AbsorbColorIntoRoadBus (Dino_BusSand_Core_StageEngine_o* __this, int32_t truckId, int32_t sampleStride, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$AbsorbColorIntoRoadBus
   System_Collections_Generic_List_SimEvent__o*
   Dino_BusSand_Core_StageEngine__AbsorbColorIntoRoadBus (Dino_BusSand_Core_StageEngine_o* __this,
   int32_t truckId, int32_t sampleStride, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_StageEngine__AbsorbColorIntoRoadBus_242951c
          (long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_28;
  
  if ((bRam0000000004f9cbb2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    bRam0000000004f9cbb2 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x98);
  lStack_28 = 0;
  if (lVar5 == 0) goto LAB_025296ac;
  iVar1 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_025296ac;
    uVar4 = Dino_BusSand_Core_Road__TryGet_24127e0(*(long *)(param_1 + 0x20),param_2,&lStack_28,0);
    if ((uVar4 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_025296ac;
      if (0 < *(int *)(lStack_28 + 0x5c)) {
        lVar5 = *(long *)(param_1 + 0x98);
        uStack_68 = CONCAT44(param_2,0x23);
        uStack_58 = 0;
        thunk_FUN_02134474(&uStack_58,0);
        if (lVar5 == 0) {
LAB_025296ac:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)PTR_DAT_04cb58d0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_025296ac;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar2 * 0x18;
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar6 + 0x30) = uStack_58;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x20) = uStack_68;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),0);
        }
        else {
          uStack_48 = 0;
          uStack_50 = uStack_68;
          uStack_40 = uStack_58;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (lVar5,&uStack_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0252959c;
      }
    }
    uVar3 = Dino_BusSand_Core_StageEngine__AbsorbInto_24296b0(param_1,param_2,param_3);
  }
  else {
LAB_0252959c:
    uVar3 = *(undefined8 *)(param_1 + 0x98);
  }
  return uVar3;
}

