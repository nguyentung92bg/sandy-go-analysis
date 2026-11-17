/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$remove_Changed
void Dino_BusSand_App_Meta_PassportFeature__remove_Changed (System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$remove_Changed
   void Dino_BusSand_App_Meta_PassportFeature__remove_Changed (System_Action_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__remove_Changed_22442b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04caef48;
  if ((bRam0000000004f9bf31 & 1) == 0) {
                    /* try { // try from 023442dc to 024442eb has its CatchHandler @ 023442ec */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caef48);
                    /* catch() { ... } // from try @ 02344274 with catch @ 023442ec
                       catch() { ... } // from try @ 023442dc with catch @ 023442ec */
                    /* try { // try from 023442f0 to 024442f3 has its CatchHandler @ 023442fc */
    bRam0000000004f9bf31 = 1;
  }
                    /* try { // try from 023442f4 to 024442ff has its CatchHandler @ 02343f60 */
  lVar4 = *(long *)puVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023442f0 with catch @ 023442fc
                        */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caa458;
                    /* try { // try from 0234430c to 02444407 has its CatchHandler @ 0234430c
                       catch() { ... } // from try @ 0234430c with catch @ 0234430c
                       catch() { ... } // from try @ 023447a0 with catch @ 0234430c
                       catch() { ... } // from try @ 02344910 with catch @ 0234430c
                       catch() { ... } // from try @ 02344988 with catch @ 0234430c
                       catch() { ... } // from try @ 02344a0c with catch @ 0234430c */
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  do {
    plVar5 = (long *)System_Delegate__Remove_4872510(lVar4,param_1,0);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 8,plVar5,lVar4);
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
  return;
}

