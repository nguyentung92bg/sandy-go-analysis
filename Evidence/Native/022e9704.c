/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$get_Alive
bool Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$get_Alive
   bool Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 022e9704 to 023e970b has its CatchHandler @ 022e9768 */
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022e970c to 023e9797 has its CatchHandler @ 022e966c */
  if ((bRam0000000004f9bbe3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbe3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 022e9704 with catch @ 022e9768 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x2c) == '\0') {
        return *(long *)(param_1 + 0x28) != 0;
      }
    }
  }
                    /* try { // try from 022e9798 to 023e982f has its CatchHandler @ 022e9798
                       catch() { ... } // from try @ 022e9798 with catch @ 022e9798
                       catch() { ... } // from try @ 022e9838 with catch @ 022e9798 */
  return false;
}

