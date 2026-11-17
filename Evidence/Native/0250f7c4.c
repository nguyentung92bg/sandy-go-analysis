/* IL2CPP: Dino.BusSand.Core.ColorShuffle.<>c__DisplayClass3_0$$<TryPlan>g__Band|0
int32_t Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Band_0 (Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0_o* __this, uint8_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ColorShuffle.<>c__DisplayClass3_0$$<TryPlan>g__Band|0
   int32_t Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Band_0
   (Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0_o* __this, uint8_t c, const MethodInfo*
   method); */

undefined4
Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Band_0_240f7c4
          (long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9cb33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe518);
    bRam0000000004f9cb33 = 1;
  }
  uStack_24 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                      (*(long *)(param_1 + 0x10),param_2,&uStack_24,*(undefined8 *)PTR_DAT_04cbe518)
    ;
                    /* try { // try from 0250f824 to 0260f8eb has its CatchHandler @ 0250f824
                       catch() { ... } // from try @ 0250f824 with catch @ 0250f824
                       catch() { ... } // from try @ 0250fc94 with catch @ 0250f824
                       catch() { ... } // from try @ 0250fd58 with catch @ 0250f824
                       catch() { ... } // from try @ 0250fd80 with catch @ 0250f824 */
    if ((uVar1 & 1) == 0) {
      uStack_24 = 0;
    }
    return uStack_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

