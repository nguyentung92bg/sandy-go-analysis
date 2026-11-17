/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$get_InFlight
bool Dino_BusSand_App_UI_BoosterFly__get_InFlight (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$get_InFlight
   bool Dino_BusSand_App_UI_BoosterFly__get_InFlight (const MethodInfo* method); */

bool Dino_BusSand_App_UI_BoosterFly__get_InFlight_217f4b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04cad4f8;
                    /* catch() { ... } // from try @ 0227f500 with catch @ 0227f4bc */
  if ((bRam0000000004f9b91b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04cad500);
    FUN_02132f7c(PTR_DAT_04cad508);
                    /* try { // try from 0227f4f4 to 0237f4ff has its CatchHandler @ 0227f5a4 */
    FUN_02132f7c(PTR_DAT_04cad510);
                    /* try { // try from 0227f500 to 0237f5c3 has its CatchHandler @ 0227f4bc */
    FUN_02132f7c(PTR_DAT_04cad518);
    FUN_02132f7c(PTR_DAT_04cad520);
    bRam0000000004f9b91b = 1;
  }
  puVar2 = PTR_DAT_04cad520;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
    lVar5 = *(long *)puVar1;
  }
  lVar3 = *(long *)puVar2;
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad510);
                    /* catch() { ... } // from try @ 0227f4f4 with catch @ 0227f5a4 */
    System_Predicate_object____ctor_2c4e748(lVar7,uVar8,*(undefined8 *)PTR_DAT_04cad518,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_02134474(plVar4,lVar7);
  }
  if (lVar5 != 0) {
                    /* try { // try from 0227f5c4 to 0237f6bf has its CatchHandler @ 0227f5c4
                       catch() { ... } // from try @ 0227f5c4 with catch @ 0227f5c4
                       catch() { ... } // from try @ 0227f6cc with catch @ 0227f5c4 */
    System_Collections_Generic_List_object___RemoveAll_3a83234
              (lVar5,lVar7,*(undefined8 *)PTR_DAT_04cad500);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      return 0 < *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

