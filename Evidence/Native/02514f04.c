/* IL2CPP: Dino.BusSand.Core.Road$$MergeReservationFor
double Dino_BusSand_Core_Road__MergeReservationFor (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$MergeReservationFor
   double Dino_BusSand_Core_Road__MergeReservationFor (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* e, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Road__MergeReservationFor_2414f04(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    auVar1._0_8_ = (double)((*(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x1c)) -
                           *(int *)(*(long *)(param_1 + 0x10) + 0x24));
    auVar1._8_8_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

