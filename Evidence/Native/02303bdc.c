/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$<Migrate>b__8_1
bool Dino_BusSand_App_Meta_BoosterIntro___c___Migrate_b__8_1 (Dino_BusSand_App_Meta_BoosterIntro___c_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$<Migrate>b__8_1
   bool Dino_BusSand_App_Meta_BoosterIntro___c___Migrate_b__8_1
   (Dino_BusSand_App_Meta_BoosterIntro___c_o* __this, int32_t i, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_BoosterIntro___c___Migrate_b__8_1_2203bdc
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04cb1980;
  puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 02303be0 to 02403be7 has its CatchHandler @ 02303bf0 */
                    /* try { // try from 02303be8 to 02403bf3 has its CatchHandler @ 02303aa8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303be0 with catch @ 02303bf0
                        */
  uStack_24 = param_2;
  if ((bRam0000000004f9bcba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1980);
    bRam0000000004f9bcba = 1;
  }
  uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar4,0);
  return uVar3 & 1;
}

