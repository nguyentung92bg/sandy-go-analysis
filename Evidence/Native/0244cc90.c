/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Guard>d__33$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__Guard_d__33__MoveNext (Dino_BusSand_Cheat_AutoQa__Guard_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Guard>d__33$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__Guard_d__33__MoveNext (Dino_BusSand_Cheat_AutoQa__Guard_d__33_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__Guard_d__33__MoveNext_234cc90(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000004f9c70b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c08);
    bRam0000000004f9c70b = 1;
  }
  if (*(uint *)(param_1 + 0x10) < 2) {
    plVar7 = *(long **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = PTR_DAT_04ca9c08;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244cdbc with catch @ 0244cdc0
                       try { // try from 0244cdc0 to 0254cdeb has its CatchHandler @ 0244cc70 */
      FUN_02133224();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04ca9c08) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0244cd30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9c08,0);
LAB_0244cd30:
                    /* try { // try from 0244cd38 to 0254cd3f has its CatchHandler @ 0244cdd0 */
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) != 0) {
                    /* try { // try from 0244cd40 to 0254cdab has its CatchHandler @ 0244cc70 */
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244cdb4 with catch @ 0244cdc4
                        */
        FUN_02133224();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0244cd98;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar1,1);
LAB_0244cd98:
      uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
                    /* try { // try from 0244cdac to 0254cdaf has its CatchHandler @ 0244cdcc */
                    /* try { // try from 0244cdb0 to 0254cdb3 has its CatchHandler @ 0244cdc8 */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
                    /* try { // try from 0244cdb4 to 0254cdb7 has its CatchHandler @ 0244cdc4 */
                    /* try { // try from 0244cdb8 to 0254cdbb has its CatchHandler @ 0244cc70 */
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
                    /* try { // try from 0244cdbc to 0254cdbf has its CatchHandler @ 0244cdc0 */
    }
  }
  return 0;
}

