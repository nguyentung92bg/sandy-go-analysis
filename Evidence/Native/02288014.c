/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$ShowNext
bool Dino_BusSand_App_UI_ActivityQuitFlow__ShowNext (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$ShowNext
   bool Dino_BusSand_App_UI_ActivityQuitFlow__ShowNext (Dino_BusSand_App_UI_ActivityQuitFlow_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_ActivityQuitFlow__ShowNext_2188014(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if ((bRam0000000004f9b969 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04cada98);
    bRam0000000004f9b969 = 1;
  }
  uVar3 = Dino_BusSand_App_UI_ActivityQuitFlow__TryEnterSimple_2188248(param_1);
  puVar2 = PTR_DAT_04cada98;
  if ((uVar3 & 1) == 0) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02288070 to 0238809b has its CatchHandler @ 02287fe8 */
      iVar1 = *(int *)(param_1 + 0x30);
      bVar6 = iVar1 < *(int *)(lVar4 + 0x18);
      if (*(int *)(lVar4 + 0x18) <= iVar1) {
        return bVar6;
      }
                    /* catch() { ... } // from try @ 0228805c with catch @ 02288084 */
      uVar5 = *(undefined8 *)puVar2;
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      uVar5 = System_Collections_Generic_List_object___get_Item_3a81924(lVar4,iVar1,uVar5);
                    /* catch() { ... } // from try @ 022880e4 with catch @ 0228809c */
      uVar3 = Dino_BusSand_App_UI_ActivityQuitFlow__ShowSingle_2188508(param_1,uVar5);
    } while ((uVar3 & 1) == 0);
  }
  else {
    bVar6 = true;
                    /* try { // try from 0228805c to 0238806f has its CatchHandler @ 02288084 */
  }
  return bVar6;
}

