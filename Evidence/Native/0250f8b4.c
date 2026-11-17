/* IL2CPP: Dino.BusSand.Core.ColorShuffle.<>c__DisplayClass3_0$$<TryPlan>b__2
int32_t Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_b__2 (Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0_o* __this, int32_t a, int32_t b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ColorShuffle.<>c__DisplayClass3_0$$<TryPlan>b__2
   int32_t Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_b__2
   (Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0_o* __this, int32_t a, int32_t b, const
   MethodInfo* method); */

void Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_b__2_240f8b4
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  if ((bRam0000000004f9cb35 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe430);
                    /* try { // try from 0250f8ec to 0260f8ef has its CatchHandler @ 0250fcc8 */
                    /* try { // try from 0250f8f0 to 0260f8ff has its CatchHandler @ 0250fce4 */
    bRam0000000004f9cb35 = 1;
  }
  puVar1 = PTR_DAT_04cbe430;
  auStack_38[0] = 0;
  uStack_3c = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 0250f910 to 0260f91b has its CatchHandler @ 0250fcd0 */
    System_Collections_Generic_List_ColorShuffle_Seat___get_Item_3b1fd68
              (auStack_50,*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_04cbe430);
    uVar2 = uStack_48;
    auStack_38[0] = uStack_48;
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 0250f92c to 0260f933 has its CatchHandler @ 0250fd04 */
      System_Collections_Generic_List_ColorShuffle_Seat___get_Item_3b1fd68
                (auStack_50,*(long *)(param_1 + 0x20),param_3,*(undefined8 *)puVar1);
      uStack_3c = Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Band_0_240f7c4
                            (param_1,uStack_48);
                    /* try { // try from 0250f958 to 0260f95b has its CatchHandler @ 0250fcc4 */
      uVar3 = Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Band_0_240f7c4
                        (param_1,uVar2);
                    /* try { // try from 0250f95c to 0260f96b has its CatchHandler @ 0250fcd8 */
      iVar4 = System_Int32__CompareTo_482d6dc(&uStack_3c,uVar3,0);
      if (iVar4 == 0) {
        uStack_3c = Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Total_1_240f83c
                              (param_1,uStack_48);
        uVar3 = Dino_BusSand_Core_ColorShuffle___c__DisplayClass3_0___TryPlan_g__Total_1_240f83c
                          (param_1,uVar2);
        iVar4 = System_Int32__CompareTo_482d6dc(&uStack_3c,uVar3,0);
                    /* try { // try from 0250f99c to 0260f9a3 has its CatchHandler @ 0250fcac */
        if ((iVar4 == 0) &&
           (iVar4 = System_Byte__CompareTo_47bae6c(auStack_38,uStack_48,0), iVar4 == 0)) {
                    /* try { // try from 0250f9b4 to 0260f9bf has its CatchHandler @ 0250fca4 */
          System_Int32__CompareTo_482d6dc(&uStack_34,param_3,0);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

