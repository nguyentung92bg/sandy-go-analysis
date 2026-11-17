/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnClosed
void Dino_BusSand_App_Meta_JourneyTracking__OnClosed (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnClosed
   void Dino_BusSand_App_Meta_JourneyTracking__OnClosed (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__OnClosed_221d3a0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bda2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bda2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__UiNamed_221d1c8(1,uVar3,0);
  }
  return;
}

