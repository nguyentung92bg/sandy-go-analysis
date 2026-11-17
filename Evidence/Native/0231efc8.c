/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$.cctor
void Dino_BusSand_App_Meta_ActivityContinueFeature___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$.cctor
   void Dino_BusSand_App_Meta_ActivityContinueFeature___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_ActivityContinueFeature___cctor_221efc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar6 = PTR_DAT_04cb2968;
  puVar5 = PTR_DAT_04cb2960;
  puVar4 = PTR_DAT_04cb2958;
  puVar3 = PTR_DAT_04cb2950;
  puVar2 = PTR_DAT_04caec70;
  puVar1 = PTR_DAT_04cadaa0;
                    /* try { // try from 0231efec to 0241f00b has its CatchHandler @ 0231f070 */
  if ((bRam0000000004f9bdb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04cb2968);
                    /* try { // try from 0231f030 to 0241f03b has its CatchHandler @ 0231f074 */
    FUN_02132f7c(PTR_DAT_04cb2960);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2958);
                    /* try { // try from 0231f050 to 0241f06f has its CatchHandler @ 0231f078 */
    FUN_02132f7c(PTR_DAT_04cb2950);
    bRam0000000004f9bdb9 = 1;
  }
  uVar7 = *(undefined8 *)puVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231efec with catch @ 0231f070
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231f030 with catch @ 0231f074
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231f050 with catch @ 0231f078
                        */
  **(undefined1 **)(*(long *)puVar1 + 0xb8) = 1;
                    /* try { // try from 0231f07c to 0241f087 has its CatchHandler @ 0231f090 */
  uVar7 = FUN_02133068(uVar7,4);
                    /* try { // try from 0231f088 to 0241f093 has its CatchHandler @ 0231ef0c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar3,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231f07c with catch @ 0231f090
                        */
                    /* try { // try from 0231f094 to 0241f1ab has its CatchHandler @ 0231f094
                       catch(type#1 @ 00000000) { ... } // from try @ 0231f094 with catch @ 0231f094
                        */
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar2,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar4,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar2,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar3,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar7,*(undefined8 *)puVar6);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

