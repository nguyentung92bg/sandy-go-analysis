/* IL2CPP: Dino.BusSand.Core.Road$$AbsorbColorInto
int32_t Dino_BusSand_Core_Road__AbsorbColorInto (Dino_BusSand_Core_Road_o* __this, int32_t truckId, Dino_BusSand_Core_SandGrid_o* grid, int32_t sampleStride, System_Collections_Generic_List_GrainPoint__o* samples, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$AbsorbColorInto
   int32_t Dino_BusSand_Core_Road__AbsorbColorInto (Dino_BusSand_Core_Road_o* __this, int32_t
   truckId, Dino_BusSand_Core_SandGrid_o* grid, int32_t sampleStride,
   System_Collections_Generic_List_GrainPoint__o* samples, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_Road__AbsorbColorInto_2416e64
          (long param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000004f9cb74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe5f8);
    bRam0000000004f9cb74 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0x48),param_2,&lStack_38,*(undefined8 *)PTR_DAT_04cbe5f8)
    ;
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lStack_38 != 0) {
      if (*(int *)(lStack_38 + 0x28) != 1) {
        return 0;
      }
      iVar1 = *(int *)(lStack_38 + 0x20) - *(int *)(lStack_38 + 0x24);
      if (iVar1 < 1) {
        return 0;
      }
      if ((param_3 != 0) &&
         (uVar3 = Dino_BusSand_Core_SandGrid__Collect_2418c50
                            (param_3,*(undefined1 *)(lStack_38 + 0x14),0,
                             *(int *)(param_3 + 0x10) + -1,0,*(int *)(param_3 + 0x14) + -1,iVar1,
                             param_5,param_4,0xffffffff,0), lStack_38 != 0)) {
        *(int *)(lStack_38 + 0x24) = *(int *)(lStack_38 + 0x24) + (int)uVar3;
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

