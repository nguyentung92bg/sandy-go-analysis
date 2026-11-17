/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Run
void Dino_BusSand_Cheat_CheatManager__Run (Dino_BusSand_Cheat_CheatManager_o* __this, System_Nullable_CheatAction__o a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Run
   void Dino_BusSand_Cheat_CheatManager__Run (Dino_BusSand_Cheat_CheatManager_o* __this,
   System_Nullable_CheatAction__o a, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Run_2363e30(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uStack_28;
  
                    /* catch() { ... } // from try @ 02463e20 with catch @ 02463e3c */
                    /* try { // try from 02463e40 to 02563e47 has its CatchHandler @ 02463e50 */
                    /* try { // try from 02463e48 to 02563e53 has its CatchHandler @ 02463c8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02463e40 with catch @ 02463e50
                        */
  uStack_28 = param_2;
  if ((bRam0000000004f9c746 & 1) == 0) {
                    /* try { // try from 02463e54 to 02563f6f has its CatchHandler @ 02463e54
                       catch() { ... } // from try @ 02463e54 with catch @ 02463e54
                       catch() { ... } // from try @ 02463ff4 with catch @ 02463e54
                       catch() { ... } // from try @ 02464054 with catch @ 02463e54
                       catch() { ... } // from try @ 02464084 with catch @ 02463e54
                       catch() { ... } // from try @ 024640a8 with catch @ 02463e54 */
    FUN_02132f7c(PTR_DAT_04cba868);
    FUN_02132f7c(PTR_DAT_04cba878);
    bRam0000000004f9c746 = 1;
  }
  if ((param_2 & 0xff) != 0) {
    uVar1 = System_Nullable_Int32Enum___get_Value_2bcbf74
                      (&uStack_28,*(undefined8 *)PTR_DAT_04cba878);
    Dino_BusSand_Cheat_CheatManager__Run_2362fe4(param_1,uVar1);
  }
  return;
}

