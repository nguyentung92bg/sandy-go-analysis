/* IL2CPP: Dino.BusSand.App.CrashContext$$.cctor
void Dino_BusSand_App_CrashContext___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$.cctor
   void Dino_BusSand_App_CrashContext___cctor (const MethodInfo* method); */

void Dino_BusSand_App_CrashContext___cctor_2173f70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar7 = PTR_DAT_04cace08;
  puVar6 = PTR_DAT_04cace00;
  puVar5 = PTR_DAT_04cac450;
  puVar4 = PTR_DAT_04cab748;
  puVar3 = PTR_DAT_04cab740;
  puVar2 = PTR_DAT_04caa788;
  puVar1 = PTR_DAT_04caa780;
                    /* catch() { ... } // from try @ 02273fd0 with catch @ 02273f7c */
  if ((bRam0000000004f9b8c2 & 1) == 0) {
                    /* try { // try from 02273fc8 to 02373fcf has its CatchHandler @ 0227401c */
                    /* try { // try from 02273fd0 to 0237402f has its CatchHandler @ 02273f7c */
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04caa780);
    FUN_02132f7c(PTR_DAT_04caa788);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cace08);
    FUN_02132f7c(PTR_DAT_04cace00);
                    /* catch() { ... } // from try @ 02273fc8 with catch @ 0227401c */
    bRam0000000004f9b8c2 = 1;
  }
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar8,*(undefined8 *)puVar1);
                    /* try { // try from 0227403c to 0237403f has its CatchHandler @ 02274048 */
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
  *puVar9 = uVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227403c with catch @ 02274048
                        */
  thunk_FUN_02134474(puVar9,uVar8);
                    /* try { // try from 0227404c to 0237407b has its CatchHandler @ 0227404c
                       catch() { ... } // from try @ 0227404c with catch @ 0227404c
                       catch() { ... } // from try @ 02274088 with catch @ 0227404c */
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_Queue_object____ctor_2ce36dc(uVar8,*(undefined8 *)puVar7);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
  *puVar9 = uVar8;
  thunk_FUN_02134474(puVar9,uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 0227407c to 02374087 has its CatchHandler @ 022740a8 */
  System_Collections_Generic_List_object____ctor_3a8138c(uVar8,*(undefined8 *)puVar3);
                    /* try { // try from 02274088 to 023740c3 has its CatchHandler @ 0227404c */
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
  *puVar9 = uVar8;
  thunk_FUN_02134474(puVar9,uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 0227407c with catch @ 022740a8 */
  System_Collections_Generic_List_object____ctor_3a8138c(uVar8,*(undefined8 *)puVar3);
                    /* try { // try from 022740c4 to 0237413b has its CatchHandler @ 022740c4
                       catch() { ... } // from try @ 022740c4 with catch @ 022740c4
                       catch() { ... } // from try @ 02274150 with catch @ 022740c4 */
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
  *puVar9 = uVar8;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                 ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

