/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$add_Changed
void Dino_BusSand_App_Meta_PassportFeature__add_Changed (System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$add_Changed
   void Dino_BusSand_App_Meta_PassportFeature__add_Changed (System_Action_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__add_Changed_22441d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 023441d4 to 02444207 has its CatchHandler @ 02343f60 */
  puVar2 = PTR_DAT_04caef48;
  if ((bRam0000000004f9bf30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 02344208 to 02444213 has its CatchHandler @ 02344240 */
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf30 = 1;
  }
  lVar4 = *(long *)puVar2;
                    /* try { // try from 02344220 to 0244422f has its CatchHandler @ 0234423c */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caa458;
                    /* try { // try from 02344234 to 02444237 has its CatchHandler @ 02344250 */
                    /* try { // try from 02344238 to 0244423b has its CatchHandler @ 0234424c */
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  do {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344220 with catch @ 0234423c
                       try { // try from 0234423c to 02444273 has its CatchHandler @ 02343f60 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344208 with catch @ 02344240
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344060 with catch @ 02344244
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344068 with catch @ 02344248
                        */
    plVar5 = (long *)System_Delegate__Combine_4872324(lVar4,param_1,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344238 with catch @ 0234424c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344234 with catch @ 02344250
                        */
    if (plVar5 != (long *)0x0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344004 with catch @ 02344254
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234414c with catch @ 02344258
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02344088 with catch @ 0234425c
                        */
      if (*plVar5 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 02344274 to 0244428b has its CatchHandler @ 023442ec */
      lVar6 = *(long *)puVar2;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 8,plVar5,lVar4);
                    /* try { // try from 0234428c to 024442db has its CatchHandler @ 02343f60 */
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
  return;
}

