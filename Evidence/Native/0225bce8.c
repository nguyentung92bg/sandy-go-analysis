/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Guide
Dino_BusSand_App_UI_GuidePanel_o* Dino_BusSand_App_QaPilot_Runner__Guide (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Guide
   Dino_BusSand_App_UI_GuidePanel_o* Dino_BusSand_App_QaPilot_Runner__Guide (const MethodInfo*
   method); */

long * Dino_BusSand_App_QaPilot_Runner__Guide_215bce8(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar2 = PTR_DAT_04caba98;
  if ((bRam0000000004f9b7f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabab8);
                    /* try { // try from 0225bd18 to 0235bd27 has its CatchHandler @ 0225bd38 */
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225bd18 with catch @ 0225bd38
                        */
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04caba98);
                    /* try { // try from 0225bd54 to 0235bd6b has its CatchHandler @ 0225bd54
                       catch() { ... } // from try @ 0225bd54 with catch @ 0225bd54
                       catch() { ... } // from try @ 0225bd74 with catch @ 0225bd54 */
    bRam0000000004f9b7f7 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
                    /* try { // try from 0225bd6c to 0235bd73 has its CatchHandler @ 0225bd84 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0225bd74 to 0235bd97 has its CatchHandler @ 0225bd54 */
  lVar5 = Dino_BusSand_App_QaPilot_Runner__OpenPanels_215c168();
  puVar4 = PTR_DAT_04cabdc0;
  puVar3 = PTR_DAT_04cabac0;
  puVar2 = PTR_DAT_04cabab8;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* catch() { ... } // from try @ 0225bd6c with catch @ 0225bd84 */
                    /* try { // try from 0225bda4 to 0235bdab has its CatchHandler @ 0225bdc0 */
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,lVar5,*(undefined8 *)PTR_DAT_04cabae0);
  do {
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)0x0;
        goto LAB_0225bdfc;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225bda4 with catch @ 0225bdc0
                        */
    } while (plStack_38 == (long *)0x0);
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
  } while ((*(byte *)(*plStack_38 + 0x130) < bVar1) ||
          (plVar7 = plStack_38,
          *(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4));
LAB_0225bdfc:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar2);
  return plVar7;
}

