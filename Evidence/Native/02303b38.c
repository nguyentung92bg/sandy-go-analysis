/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$<Migrate>b__8_0
bool Dino_BusSand_App_Meta_BoosterIntro___c___Migrate_b__8_0 (Dino_BusSand_App_Meta_BoosterIntro___c_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$<Migrate>b__8_0
   bool Dino_BusSand_App_Meta_BoosterIntro___c___Migrate_b__8_0
   (Dino_BusSand_App_Meta_BoosterIntro___c_o* __this, int32_t i, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_BoosterIntro___c___Migrate_b__8_0_2203b38
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04cb1d18;
  puVar1 = PTR_DAT_04cabaf8;
  uStack_24 = param_2;
  if ((bRam0000000004f9bcb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 02303b70 to 02403b7f has its CatchHandler @ 02303bd8 */
    FUN_02132f7c(PTR_DAT_04cb1d18);
                    /* try { // try from 02303b80 to 02403b9f has its CatchHandler @ 02303aa8 */
    bRam0000000004f9bcb9 = 1;
  }
  uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
                    /* try { // try from 02303ba0 to 02403bb3 has its CatchHandler @ 02303bcc */
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 02303bbc to 02403bcb has its CatchHandler @ 02303bd8 */
  uVar3 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar4,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303ba0 with catch @ 02303bcc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303b70 with catch @ 02303bd8
                       catch(type#1 @ 00000000) { ... } // from try @ 02303bbc with catch @ 02303bd8
                        */
  return uVar3 & 1;
}

