/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$SplitModeContent
void Dino_BusSand_App_Meta_RacingRobotParser__SplitModeContent (System_String_o* raw, System_String_o** mode, System_String_o** content, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$SplitModeContent
   void Dino_BusSand_App_Meta_RacingRobotParser__SplitModeContent (System_String_o* raw,
   System_String_o** mode, System_String_o** content, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotParser__SplitModeContent_225dfc0
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9c02a & 1) == 0) {
                    /* try { // try from 0235dfe8 to 0245dff7 has its CatchHandler @ 0235e07c */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caccf0);
                    /* try { // try from 0235e000 to 0245e007 has its CatchHandler @ 0235e078 */
    bRam0000000004f9c02a = 1;
  }
  puVar1 = PTR_DAT_04ca9c30;
                    /* try { // try from 0235e014 to 0245e027 has its CatchHandler @ 0235e084 */
  uVar3 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) goto LAB_0235e0d8;
                    /* try { // try from 0235e03c to 0245e04b has its CatchHandler @ 0235e080 */
    iVar2 = System_String__IndexOf_46d72c4(param_1,0x3a,0);
    if (-1 < iVar2) {
      lVar4 = System_String__Substring_46d4848(param_1,0,iVar2,0);
                    /* try { // try from 0235e060 to 0245e06b has its CatchHandler @ 0235e088 */
      if (lVar4 == 0) {
LAB_0235e0d8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = System_String__Trim_46d6ee0(lVar4,0);
                    /* try { // try from 0235e070 to 0245e073 has its CatchHandler @ 0235e084 */
      *param_2 = uVar5;
                    /* try { // try from 0235e074 to 0245e09f has its CatchHandler @ 0235ddbc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235e000 with catch @ 0235e078
                        */
      thunk_FUN_02134474(param_2,uVar5);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235dfe8 with catch @ 0235e07c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235e03c with catch @ 0235e080
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235e014 with catch @ 0235e084
                       catch(type#1 @ 049bb748) { ... } // from try @ 0235e070 with catch @ 0235e084
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235e060 with catch @ 0235e088
                        */
      lVar4 = System_String__Substring_46d6a94(param_1,iVar2 + 1,0);
      if (lVar4 == 0) goto LAB_0235e0d8;
      uVar5 = System_String__Trim_46d6ee0(lVar4,0);
      goto code_r0x02132f28;
    }
                    /* try { // try from 0235e0a0 to 0245e0b3 has its CatchHandler @ 0235e16c */
    uVar5 = System_String__Trim_46d6ee0(param_1,0);
    *param_2 = uVar5;
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_04caccf0;
    *param_2 = uVar5;
  }
                    /* try { // try from 0235e0b4 to 0245e157 has its CatchHandler @ 0235ddbc */
  thunk_FUN_02134474(param_2,uVar5);
  uVar5 = *(undefined8 *)puVar1;
code_r0x02132f28:
  *param_3 = uVar5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)param_3 >> 0xc & 0x3f),
                 ((ulong)param_3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

