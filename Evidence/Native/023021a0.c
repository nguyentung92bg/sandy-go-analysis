/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate.<>c__DisplayClass13_0$$<Check>b__0
void Dino_BusSand_App_Meta_AppUpdate___c__DisplayClass13_0___Check_b__0 (Dino_BusSand_App_Meta_AppUpdate___c__DisplayClass13_0_o* __this, int32_t r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate.<>c__DisplayClass13_0$$<Check>b__0
   void Dino_BusSand_App_Meta_AppUpdate___c__DisplayClass13_0___Check_b__0
   (Dino_BusSand_App_Meta_AppUpdate___c__DisplayClass13_0_o* __this, int32_t r, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_AppUpdate___c__DisplayClass13_0___Check_b__0_22021a0
               (long param_1,int param_2)

{
  long lVar1;
  
  if ((bRam0000000004f9bcaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c08);
    FUN_02132f7c(PTR_DAT_04cb1c28);
    bRam0000000004f9bcaf = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x14) = param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else if (param_2 != 0) {
                    /* try { // try from 023021f4 to 024022db has its CatchHandler @ 023021f4
                       catch() { ... } // from try @ 023021f4 with catch @ 023021f4
                       catch() { ... } // from try @ 023022f0 with catch @ 023021f4 */
    Dino_BusSand_App_Meta_AppUpdate__Finish_2201cdc(param_2,*(undefined8 *)PTR_DAT_04cb1c28,0);
    lVar1 = *(long *)(*(long *)(*(long *)PTR_DAT_04cb1c08 + 0xb8) + 0x28);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02302230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

