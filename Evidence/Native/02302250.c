/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate.<Check>d__13$$MoveNext
bool Dino_BusSand_App_Meta_AppUpdate__Check_d__13__MoveNext (Dino_BusSand_App_Meta_AppUpdate__Check_d__13_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate.<Check>d__13$$MoveNext
   bool Dino_BusSand_App_Meta_AppUpdate__Check_d__13__MoveNext
   (Dino_BusSand_App_Meta_AppUpdate__Check_d__13_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_AppUpdate__Check_d__13__MoveNext_2202250(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9bcb0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac558);
    FUN_02132f7c(PTR_DAT_04cb1c08);
    FUN_02132f7c(PTR_DAT_04cb1c30);
    FUN_02132f7c(PTR_DAT_04cb1c38);
    FUN_02132f7c(PTR_DAT_04cb1c40);
    FUN_02132f7c(PTR_DAT_04cb1c48);
    FUN_02132f7c(PTR_DAT_04cb1c50);
    FUN_02132f7c(PTR_DAT_04cad1a0);
    FUN_02132f7c(PTR_DAT_04cb1c58);
                    /* try { // try from 023022dc to 024022ef has its CatchHandler @ 02302308 */
    FUN_02132f7c(PTR_DAT_04cb1c60);
    bRam0000000004f9bcb0 = 1;
  }
  puVar1 = PTR_DAT_04cb1c48;
                    /* try { // try from 023022f0 to 0240231f has its CatchHandler @ 023021f4 */
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_02302380:
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) {
LAB_02302530:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(char *)(lVar2 + 0x18) == '\0') &&
       (fVar11 = *(float *)(param_1 + 0x40), fVar11 < *(float *)(param_1 + 0x30))) {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) {
LAB_0230248c:
        fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(float *)(param_1 + 0x40) = fVar11 + fVar10;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      uVar4 = (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      if ((uVar4 & 1) == 0) {
        fVar11 = *(float *)(param_1 + 0x40);
        goto LAB_0230248c;
      }
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) goto LAB_02302530;
    }
    puVar7 = (undefined8 *)PTR_DAT_04cad1a0;
    if (*(char *)(lVar2 + 0x18) == '\0') {
      uVar4 = 0;
      *(undefined1 *)(lVar2 + 0x10) = 1;
    }
    else {
      uVar4 = (ulong)*(uint *)(lVar2 + 0x14);
      puVar7 = (undefined8 *)PTR_DAT_04cb1c50;
    }
    uVar5 = *puVar7;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
                    /* catch() { ... } // from try @ 023022dc with catch @ 02302308 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02302320 to 02402407 has its CatchHandler @ 02302320
                       catch() { ... } // from try @ 02302320 with catch @ 02302320
                       catch() { ... } // from try @ 0230241c with catch @ 02302320 */
    System_Object___ctor_4870e5c(lVar2,0);
    plVar8 = (long *)(param_1 + 0x28);
    *plVar8 = lVar2;
    thunk_FUN_02134474(plVar8,lVar2);
    puVar1 = PTR_DAT_04cac558;
    plVar3 = *(long **)(*(long *)PTR_DAT_04cb1c08 + 0xb8) + 3;
    if ((char)*plVar3 == '\0') {
      lVar2 = **(long **)(*(long *)PTR_DAT_04cb1c08 + 0xb8);
      if (lVar2 != 0) {
                    /* try { // try from 0230241c to 0240244b has its CatchHandler @ 02302320 */
        lVar9 = *plVar8;
        if (lVar9 == 0) goto LAB_02302530;
        *(undefined1 *)(lVar9 + 0x18) = 0;
        *(undefined1 *)(lVar9 + 0x10) = 0;
                    /* catch() { ... } // from try @ 02302408 with catch @ 02302434 */
        uVar5 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar9 + 0x14) = 0;
        uVar5 = thunk_FUN_0216e89c(uVar5);
                    /* try { // try from 0230244c to 0240255b has its CatchHandler @ 0230244c
                       catch() { ... } // from try @ 0230244c with catch @ 0230244c
                       catch() { ... } // from try @ 02302570 with catch @ 0230244c */
        System_Action_Int32Enum____ctor_35ef240(uVar5,lVar9,*(undefined8 *)PTR_DAT_04cb1c40,0);
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
        *(undefined4 *)(param_1 + 0x40) = 0;
        goto LAB_02302380;
      }
      uVar4 = 0;
      puVar7 = (undefined8 *)PTR_DAT_04cb1c58;
    }
    else {
      uVar4 = System_Nullable_Int32Enum___get_Value_2bcbf74(plVar3,*(undefined8 *)PTR_DAT_04cb1c38);
      puVar7 = (undefined8 *)PTR_DAT_04cb1c60;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *puVar7;
  }
  Dino_BusSand_App_Meta_AppUpdate__Finish_2201cdc(uVar4,uVar5,uVar6);
                    /* try { // try from 02302408 to 0240241b has its CatchHandler @ 02302434 */
  return 0;
}

