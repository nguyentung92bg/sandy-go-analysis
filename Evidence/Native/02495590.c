/* IL2CPP: Dino.BusSand.View.ChainRig.<>c__DisplayClass14_0$$<.ctor>b__0
int32_t Dino_BusSand_View_ChainRig___c__DisplayClass14_0____ctor_b__0 (Dino_BusSand_View_ChainRig___c__DisplayClass14_0_o* __this, Dino_BusSand_Core_Truck_o* p, Dino_BusSand_Core_Truck_o* q, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ChainRig.<>c__DisplayClass14_0$$<.ctor>b__0
   int32_t Dino_BusSand_View_ChainRig___c__DisplayClass14_0____ctor_b__0
   (Dino_BusSand_View_ChainRig___c__DisplayClass14_0_o* __this, Dino_BusSand_Core_Truck_o* p,
   Dino_BusSand_Core_Truck_o* q, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig___c__DisplayClass14_0____ctor_b__0_2395590
               (long param_1,long param_2,long param_3)

{
  double dStack_8;
  
  dStack_8 = 0.0;
  if (param_3 != 0) {
    dStack_8 = *(double *)(param_3 + 0x18) * *(double *)(param_1 + 0x10) +
               *(double *)(param_3 + 0x20) * *(double *)(param_1 + 0x18);
    if (param_2 != 0) {
      System_Double__CompareTo_4817744
                (*(double *)(param_1 + 0x10) * *(double *)(param_2 + 0x18) +
                 *(double *)(param_1 + 0x18) * *(double *)(param_2 + 0x20),&dStack_8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

