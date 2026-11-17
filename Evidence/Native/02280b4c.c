/* IL2CPP: Dino.BusSand.App.UI.BoosterFly.<>c__DisplayClass9_0$$<Fly>b__1
void Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0___Fly_b__1 (Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BoosterFly.<>c__DisplayClass9_0$$<Fly>b__1
   void Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0___Fly_b__1
   (Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0___Fly_b__1_2180b4c(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar4 = PTR_DAT_04cad4f8;
  if ((bRam0000000004f9b925 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04cad590);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b925 = 1;
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    System_Collections_Generic_List_object___Remove_3a830f8
              (**(long **)(lVar5 + 0xb8),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)PTR_DAT_04cad590);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02280cd4;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x10),0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      UnityEngine_Object__Destroy_43c8114(uVar7,0);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02280c54 to 02380c9b has its CatchHandler @ 0228094c */
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      uVar8 = *(undefined4 *)(param_1 + 0x38);
      uVar9 = *(undefined4 *)(param_1 + 0x3c);
      cVar2 = *(char *)(param_1 + 0x58);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022809dc with catch @ 02280c88 */
      Dino_BusSand_App_UI_BoosterFly__Impact_217ffe0(uVar8,uVar9,uVar1,uVar7,cVar2 != '\0');
    }
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02280cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
    return;
  }
LAB_02280cd4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

