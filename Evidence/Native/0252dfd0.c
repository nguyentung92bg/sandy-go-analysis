/* IL2CPP: Dino.BusSand.Core.TruckGrid.<>c__DisplayClass44_0$$<ChainOf>b__0
int32_t Dino_BusSand_Core_TruckGrid___c__DisplayClass44_0___ChainOf_b__0 (Dino_BusSand_Core_TruckGrid___c__DisplayClass44_0_o* __this, Dino_BusSand_Core_Truck_o* a, Dino_BusSand_Core_Truck_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid.<>c__DisplayClass44_0$$<ChainOf>b__0
   int32_t Dino_BusSand_Core_TruckGrid___c__DisplayClass44_0___ChainOf_b__0
   (Dino_BusSand_Core_TruckGrid___c__DisplayClass44_0_o* __this, Dino_BusSand_Core_Truck_o* a,
   Dino_BusSand_Core_Truck_o* b, const MethodInfo* method); */

void Dino_BusSand_Core_TruckGrid___c__DisplayClass44_0___ChainOf_b__0_242dfd0
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  double dStack_18;
  
  dStack_18 = 0.0;
  if (param_3 != 0) {
    dStack_18 = *(double *)(param_3 + 0x18) * *(double *)(param_1 + 0x10) +
                *(double *)(param_3 + 0x20) * *(double *)(param_1 + 0x18);
    if (param_2 != 0) {
      iVar1 = System_Double__CompareTo_4817744
                        (*(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x18) +
                         *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x20),&dStack_18,0);
      if (iVar1 == 0) {
        System_Int32__CompareTo_482d6dc(param_2 + 0x10,*(undefined4 *)(param_3 + 0x10),0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

