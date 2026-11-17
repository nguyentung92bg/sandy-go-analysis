/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$remove_Closed
void Dino_BusSand_App_UI_UIManagerEvents__remove_Closed (System_Action_UIPanel__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$remove_Closed
   void Dino_BusSand_App_UI_UIManagerEvents__remove_Closed (System_Action_UIPanel__o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManagerEvents__remove_Closed_21ffe1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb1b68;
                    /* catch() { ... } // from try @ 022ffd94 with catch @ 022ffe20 */
                    /* catch() { ... } // from try @ 022ffc38 with catch @ 022ffe34 */
                    /* catch() { ... } // from try @ 022ffbd4 with catch @ 022ffe38 */
                    /* catch() { ... } // from try @ 022ffb7c with catch @ 022ffe3c */
                    /* catch() { ... } // from try @ 022ffafc with catch @ 022ffe40 */
  if ((bRam0000000004f9bc8b & 1) == 0) {
                    /* catch() { ... } // from try @ 022ffd64 with catch @ 022ffe44 */
                    /* catch() { ... } // from try @ 022ffb60 with catch @ 022ffe48 */
    FUN_02132f7c(PTR_DAT_04cacd28);
    FUN_02132f7c(PTR_DAT_04cb1b68);
    bRam0000000004f9bc8b = 1;
  }
  puVar1 = PTR_DAT_04cacd28;
                    /* catch() { ... } // from try @ 022ffaf0 with catch @ 022ffe64 */
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  do {
                    /* catch() { ... } // from try @ 022ffd28 with catch @ 022ffe80 */
    lVar4 = System_Delegate__Remove_4872510(lVar6,param_1,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_0216e7a0(lVar4,uVar7);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar4,uVar7);
      }
    }
                    /* catch() { ... } // from try @ 022ffae0 with catch @ 022ffeb8
                       catch() { ... } // from try @ 022ffb08 with catch @ 022ffeb8 */
    lVar4 = FUN_0216aff4(*(long *)(*(long *)puVar2 + 0xb8) + 8,lVar5,lVar6);
    bVar3 = lVar4 != lVar6;
    lVar6 = lVar4;
  } while (bVar3);
                    /* catch() { ... } // from try @ 022ffb94 with catch @ 022ffecc
                       catch() { ... } // from try @ 022ffc08 with catch @ 022ffecc
                       catch() { ... } // from try @ 022ffc6c with catch @ 022ffecc
                       catch() { ... } // from try @ 022ffd88 with catch @ 022ffecc */
  return;
}

