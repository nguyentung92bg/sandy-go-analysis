/* IL2CPP: Dino.BusSand.App.CrashContext$$Key
void Dino_BusSand_App_CrashContext__Key (System_String_o* key, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Key
   void Dino_BusSand_App_CrashContext__Key (System_String_o* key, System_String_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Key_216f9dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cacbb0;
  if ((bRam0000000004f9b8b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04caaf80);
    FUN_02132f7c(PTR_DAT_04cacbb8);
    FUN_02132f7c(PTR_DAT_04cacbb0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b8b4 = 1;
  }
  uStack_38 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar2 = PTR_DAT_04cac450;
  puVar1 = PTR_DAT_04ca9c30;
  if (lVar3 != 0) {
                    /* try { // try from 0226fa84 to 0236fa8f has its CatchHandler @ 0226faac */
                    /* try { // try from 0226fa90 to 0236fac7 has its CatchHandler @ 0226f9b0 */
    puVar8 = (undefined8 *)(lVar3 + 0x18);
    *puVar8 = param_1;
    thunk_FUN_02134474(puVar8,param_1);
                    /* catch() { ... } // from try @ 0226fa84 with catch @ 0226faac */
    plVar7 = (long *)(lVar3 + 0x20);
    *plVar7 = param_2;
    thunk_FUN_02134474(plVar7,param_2);
    lVar4 = *(long *)puVar1;
    if (*plVar7 != 0) {
      lVar4 = *plVar7;
    }
    *plVar7 = lVar4;
    thunk_FUN_02134474(plVar7);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 != 0) {
      uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar4,*puVar8,&uStack_38,*(undefined8 *)PTR_DAT_04cab608);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = System_String__op_Equality_46d1108(uStack_38,*plVar7,0), (uVar5 & 1) == 0)) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 0226fb30 to 0236fb63 has its CatchHandler @ 0226fb30
                       catch(type#1 @ 00000000) { ... } // from try @ 0226fb30 with catch @ 0226fb30
                       catch(type#1 @ 00000000) { ... } // from try @ 0226fc28 with catch @ 0226fb30
                        */
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_0226fbd4;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar4,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),
                   *(undefined8 *)PTR_DAT_04caaf80);
                    /* try { // try from 0226fb64 to 0236fb73 has its CatchHandler @ 0226fc1c */
        plVar7 = (long *)(lVar3 + 0x10);
        *plVar7 = **(long **)(*(long *)puVar2 + 0xb8);
        thunk_FUN_02134474(plVar7);
        if (*plVar7 != 0) {
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 0226fb94 to 0236fb9b has its CatchHandler @ 0226fc18 */
          System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cacbb8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_CrashContext__Send_2173340(uVar6);
        }
      }
      return;
    }
  }
LAB_0226fbd4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

