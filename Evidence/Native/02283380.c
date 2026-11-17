/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Undriven
void Dino_BusSand_App_UI_KitPrefabs__Undriven (UnityEngine_Transform_o* node, Dino_BusSand_App_UI_KitValues_o* baked, Dino_BusSand_App_UI_KitValues_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Undriven
   void Dino_BusSand_App_UI_KitPrefabs__Undriven (UnityEngine_Transform_o* node,
   Dino_BusSand_App_UI_KitValues_o* baked, Dino_BusSand_App_UI_KitValues_o* v, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitPrefabs__Undriven_2183380(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((bRam0000000004f9b937 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad798);
    FUN_02132f7c(PTR_DAT_04cad7a0);
    FUN_02132f7c(PTR_DAT_04cad7a8);
    FUN_02132f7c(PTR_DAT_04cad7b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b937 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (param_1 == 0) goto LAB_022835e4;
  uVar3 = UnityEngine_Transform__get_parent_43d0d70(param_1,0);
                    /* try { // try from 02283404 to 02383417 has its CatchHandler @ 022834fc */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02283418 to 02383427 has its CatchHandler @ 022834dc */
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* try { // try from 02283428 to 02383437 has its CatchHandler @ 022834d8 */
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  plVar7 = (long *)0x0;
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 02283438 to 02383453 has its CatchHandler @ 02283370 */
    lVar5 = UnityEngine_Transform__get_parent_43d0d70(param_1,0);
    if (lVar5 == 0) goto LAB_022835e4;
    plVar7 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar5,*(undefined8 *)PTR_DAT_04cad7a8);
                    /* try { // try from 02283454 to 0238347f has its CatchHandler @ 02283530 */
  }
  plVar6 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                             (param_1,*(undefined8 *)PTR_DAT_04cad7a0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(plVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_022835e4;
                    /* try { // try from 022834d0 to 023834d7 has its CatchHandler @ 022834ec */
      uVar4 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
      if ((uVar4 & 1) != 0) goto LAB_02283538;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02283428 with catch @ 022834d8
                       try { // try from 022834d8 to 02383523 has its CatchHandler @ 02283370 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02283418 with catch @ 022834dc
                        */
    if ((param_2 == 0) || (param_3 == 0)) goto LAB_022835e4;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022834d0 with catch @ 022834ec
                        */
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    if (plVar7 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02283404 with catch @ 022834fc
                        */
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cad7b0 + 0x130);
                    /* try { // try from 02283524 to 02383527 has its CatchHandler @ 02283530 */
                    /* try { // try from 02283528 to 02383543 has its CatchHandler @ 02283370 */
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04cad7b0))
      {
        if (*(char *)((long)plVar7 + 0x66) != '\0') {
          *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        }
        if (*(char *)((long)plVar7 + 0x67) != '\0') {
          *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        }
        goto LAB_02283538;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02283454 with catch @ 02283530
                       catch(type#1 @ 00000000) { ... } // from try @ 02283524 with catch @ 02283530
                        */
    *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
LAB_02283538:
  lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                    (param_1,*(undefined8 *)PTR_DAT_04cad798);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) {
LAB_022835e4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar5 + 0x20) != 0) {
      if ((param_3 == 0) || (param_2 == 0)) goto LAB_022835e4;
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if (*(int *)(lVar5 + 0x24) != 0) {
      if ((param_3 == 0) || (param_2 == 0)) goto LAB_022835e4;
      *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  return;
}

