/* IL2CPP: Dino.BusSand.Core.Road$$Depth
int32_t Dino_BusSand_Core_Road__Depth (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$Depth
   int32_t Dino_BusSand_Core_Road__Depth (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method); */

int Dino_BusSand_Core_Road__Depth_2416734(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  long lStack_28;
  
  if ((bRam0000000004f9cb68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe5f8);
    bRam0000000004f9cb68 = 1;
  }
  puVar1 = PTR_DAT_04cbe5f8;
  lStack_28 = 0;
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x78) == 0) break;
      uVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (*(long *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x10),&lStack_28,
                         *(undefined8 *)puVar1);
      if ((uVar2 & 1) == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      param_2 = lStack_28;
    } while (lStack_28 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

