/* IL2CPP: Dino.BusSand.Core.Road$$<BuildTrains>b__102_0
int32_t Dino_BusSand_Core_Road___BuildTrains_b__102_0 (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* x, Dino_BusSand_Core_RoadBus_o* y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$<BuildTrains>b__102_0
   int32_t Dino_BusSand_Core_Road___BuildTrains_b__102_0 (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* x, Dino_BusSand_Core_RoadBus_o* y, const MethodInfo* method); */

void Dino_BusSand_Core_Road___BuildTrains_b__102_0_241704c
               (undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  uStack_24 = Dino_BusSand_Core_Road__Depth_2416734();
  uVar1 = Dino_BusSand_Core_Road__Depth_2416734(param_1,param_3);
  iVar2 = System_Int32__CompareTo_482d6dc(&uStack_24,uVar1,0);
  if (iVar2 == 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Int32__CompareTo_482d6dc(param_2 + 0x10,*(undefined4 *)(param_3 + 0x10),0);
  }
  return;
}

