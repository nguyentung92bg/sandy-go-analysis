/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$Finish
void Dino_BusSand_App_Meta_AppUpdate__Finish (int32_t r, System_String_o* source, System_Action_AppUpdate_Result__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$Finish
   void Dino_BusSand_App_Meta_AppUpdate__Finish (int32_t r, System_String_o* source,
   System_Action_AppUpdate_Result__o* done, const MethodInfo* method); */

void Dino_BusSand_App_Meta_AppUpdate__Finish_2201cdc(int param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  
  if ((bRam0000000004f9bcac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cac570);
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04cac978);
    FUN_02132f7c(PTR_DAT_04cad1a0);
    FUN_02132f7c(PTR_DAT_04cb1c18);
    bRam0000000004f9bcac = 1;
  }
  if (cRam0000000004f9bcfd == '\0') {
    FUN_02132f7c(PTR_DAT_04cb1c08);
    cRam0000000004f9bcfd = '\x01';
  }
  *(int *)(*(long *)(*(long *)PTR_DAT_04cb1c08 + 0xb8) + 0x20) = param_1;
  if ((param_1 == 0) &&
     (uVar3 = System_String__op_Equality_46d1108(param_2,*(undefined8 *)PTR_DAT_04cad1a0,0),
     (uVar3 & 1) == 0)) {
LAB_02301f08:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x18))
                (*(undefined8 *)(param_3 + 0x40),param_1,*(undefined8 *)(param_3 + 0x28));
    }
                    /* try { // try from 02301f24 to 02401f27 has its CatchHandler @ 02301f28 */
                    /* catch() { ... } // from try @ 02301f24 with catch @ 02301f28
                       try { // try from 02301f28 to 02401f5f has its CatchHandler @ 02301e80 */
    return;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
  puVar2 = PTR_DAT_04cac690;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cac690 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac690,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) {
LAB_02301f3c:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  puVar1 = PTR_DAT_04cac570;
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar2;
    thunk_FUN_02134474();
    uStack_58 = *(undefined8 *)puVar1;
    uStack_50 = 0xffffffffffffffff;
    iStack_48 = param_1;
    lVar5 = System_Enum__ToString_4863070(&uStack_58,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_02301f3c;
    puVar2 = PTR_DAT_04cb1c18;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_02134474(plVar4 + 5,lVar5);
      lVar5 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 02301f28 with catch @ 02301e80 */
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02301f3c;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar2;
        thunk_FUN_02134474();
        if ((param_2 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_02301f3c;
        puVar1 = PTR_DAT_04cac978;
        puVar2 = PTR_DAT_04cac5c0;
                    /* try { // try from 02301ec0 to 02401f0f has its CatchHandler @ 02301f4c */
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = param_2;
          thunk_FUN_02134474(plVar4 + 7,param_2);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar1,plVar4,0);
          goto LAB_02301f08;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

