/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$OnQuitTap
void Dino_BusSand_App_UI_ActivityQuitFlow__OnQuitTap (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$OnQuitTap
   void Dino_BusSand_App_UI_ActivityQuitFlow__OnQuitTap (Dino_BusSand_App_UI_ActivityQuitFlow_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityQuitFlow__OnQuitTap_21880b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9b967 & 1) == 0) {
                    /* try { // try from 022880d8 to 023880e3 has its CatchHandler @ 02288104 */
    FUN_02132f7c(PTR_DAT_04cada88);
                    /* try { // try from 022880e4 to 0238812f has its CatchHandler @ 0228809c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b967 = 1;
  }
  if (*(char *)(param_1 + 0x35) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 022880d8 with catch @ 02288104 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_02288198:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x2c) == '\0') {
        if (*(char *)(param_1 + 0x34) == '\0') {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_02288198;
          if ((*(int *)(param_1 + 0x30) < *(int *)(*(long *)(param_1 + 0x18) + 0x18)) &&
             (uVar1 = Dino_BusSand_App_UI_ActivityQuitFlow__ShowNext_2188014(param_1),
             (uVar1 & 1) != 0)) {
            return;
          }
        }
        lVar2 = *(long *)(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x35) = 1;
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02288194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
    }
  }
  return;
}

