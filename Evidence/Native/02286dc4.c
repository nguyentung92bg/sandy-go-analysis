/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$RefreshCoins
void Dino_BusSand_App_UI_ActivityContinueUi__RefreshCoins (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$RefreshCoins
   void Dino_BusSand_App_UI_ActivityContinueUi__RefreshCoins (Dino_BusSand_App_UI_UIPanel_o* p,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinueUi__RefreshCoins_2186dc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000004f9b960 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02286e08 to 02386e1b has its CatchHandler @ 02286e30 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cada10);
                    /* try { // try from 02286e1c to 02386e47 has its CatchHandler @ 02286d90 */
    FUN_02132f7c(PTR_DAT_04cad9d0);
    bRam0000000004f9b960 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 02286e08 with catch @ 02286e30 */
                    /* catch() { ... } // from try @ 02286e90 with catch @ 02286e48 */
    uVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad9d0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
    lVar5 = 0;
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 02286e84 to 02386e8f has its CatchHandler @ 02286eb0 */
                    /* try { // try from 02286e90 to 02386edb has its CatchHandler @ 02286e48 */
      lVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar2,*(undefined8 *)PTR_DAT_04cada10,0)
      ;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 02286e84 with catch @ 02286eb0 */
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    plVar4 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) goto LAB_02286f80;
      plVar4 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar5,*(undefined8 *)PTR_DAT_04cad790);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
    }
    uVar2 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(uVar2,0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02286f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x518))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x520));
      return;
    }
  }
LAB_02286f80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

