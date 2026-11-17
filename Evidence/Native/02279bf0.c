/* IL2CPP: Dino.BusSand.App.SimulatedIap.<>c__DisplayClass2_0$$<Purchase>b__0
void Dino_BusSand_App_SimulatedIap___c__DisplayClass2_0___Purchase_b__0 (Dino_BusSand_App_SimulatedIap___c__DisplayClass2_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedIap.<>c__DisplayClass2_0$$<Purchase>b__0
   void Dino_BusSand_App_SimulatedIap___c__DisplayClass2_0___Purchase_b__0
   (Dino_BusSand_App_SimulatedIap___c__DisplayClass2_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_SimulatedIap___c__DisplayClass2_0___Purchase_b__0_2179bf0(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9b8f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1c8);
    bRam0000000004f9b8f7 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 02279c34 to 02379c3f has its CatchHandler @ 02279ce8 */
                    /* WARNING: Could not recover jumptable at 0x02279c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),
               *(char *)(*(long *)(*(long *)PTR_DAT_04cad1c8 + 0xb8) + 1) == '\0',
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

