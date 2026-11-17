/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$OnStay
void Dino_BusSand_App_UI_ActivityQuitFlow__OnStay (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$OnStay
   void Dino_BusSand_App_UI_ActivityQuitFlow__OnStay (Dino_BusSand_App_UI_ActivityQuitFlow_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityQuitFlow__OnStay_218819c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9b968 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b968 = 1;
  }
  if (*(char *)(param_1 + 0x35) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x2c) == '\0') {
        lVar2 = *(long *)(param_1 + 0x28);
        *(undefined1 *)(param_1 + 0x35) = 1;
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02288240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
    }
  }
  return;
}

