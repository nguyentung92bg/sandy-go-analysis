/* IL2CPP: Dino.BusSand.Core.StageEngine$$ResumeByFillingRoadBus
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__ResumeByFillingRoadBus (Dino_BusSand_Core_StageEngine_o* __this, int32_t busCount, int32_t sampleStride, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$ResumeByFillingRoadBus
   System_Collections_Generic_List_SimEvent__o*
   Dino_BusSand_Core_StageEngine__ResumeByFillingRoadBus (Dino_BusSand_Core_StageEngine_o* __this,
   int32_t busCount, int32_t sampleStride, const MethodInfo* method); */

long Dino_BusSand_Core_StageEngine__ResumeByFillingRoadBus_2429894
               (long param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04cb58c8;
  puVar1 = PTR_DAT_04cb58c0;
  if ((bRam0000000004f9cbb4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cbee28);
    FUN_02132f7c(PTR_DAT_04cb58c8);
    FUN_02132f7c(PTR_DAT_04cb58c0);
    bRam0000000004f9cbb4 = 1;
  }
  uStack_44 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_SimEvent____ctor_3abf368(lVar3,*(undefined8 *)puVar2);
  if (((*(char *)(param_1 + 0x80) != '\0') && (*(char *)(param_1 + 0x81) == '\0')) &&
     (*(int *)(param_1 + 0x84) != 3)) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_02529a24:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = *(undefined8 *)PTR_DAT_04cae200;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x70);
    lVar5 = thunk_FUN_0216e89c(uVar4);
    System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar5,*(undefined8 *)PTR_DAT_04cae208);
    puVar2 = PTR_DAT_04cbee28;
    puVar1 = PTR_DAT_04cae218;
    if (0 < param_2) {
      do {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_02529a24;
        uVar6 = Dino_BusSand_Core_Road__TryPickNearestToBranch_2416bdc
                          (*(long *)(param_1 + 0x20),lVar5,&uStack_44,0);
        if ((uVar6 & 1) == 0) {
          return lVar3;
        }
        if (lVar5 == 0) goto LAB_02529a24;
        System_Collections_Generic_HashSet_int___Add_37dc0f0(lVar5,uStack_44,*(undefined8 *)puVar1);
        uVar4 = Dino_BusSand_Core_StageEngine__AbsorbInto_24296b0(param_1,uStack_44,param_3);
        if (lVar3 == 0) goto LAB_02529a24;
        System_Collections_Generic_List_SimEvent___AddRange_3abfee4
                  (lVar3,uVar4,*(undefined8 *)puVar2);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return lVar3;
}

