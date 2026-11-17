/* IL2CPP: Dino.BusSand.Core.ColorShuffle.<>c__DisplayClass3_0$$<TryPlan>g__Total|1
int32_t Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Total_1 (Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0_o* __this, uint8_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ColorShuffle.<>c__DisplayClass3_0$$<TryPlan>g__Total|1
   int32_t Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Total_1
   (Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0_o* __this, uint8_t c, const MethodInfo*
   method); */

undefined4
Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Total_1_240f83c
          (long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9cb34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe518);
    bRam0000000004f9cb34 = 1;
  }
  uStack_24 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                      (*(long *)(param_1 + 0x18),param_2,&uStack_24,*(undefined8 *)PTR_DAT_04cbe518)
    ;
    if ((uVar1 & 1) == 0) {
      uStack_24 = 0;
    }
    return uStack_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

