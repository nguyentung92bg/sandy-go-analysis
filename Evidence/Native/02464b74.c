/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$IsBinding
bool Dino_BusSand_Cheat_CheatManager__IsBinding (Dino_BusSand_Cheat_CheatManager_o* __this, UnityEngine_Event_o* e, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$IsBinding
   bool Dino_BusSand_Cheat_CheatManager__IsBinding (Dino_BusSand_Cheat_CheatManager_o* __this,
   UnityEngine_Event_o* e, int32_t a, const MethodInfo* method); */

uint Dino_BusSand_Cheat_CheatManager__IsBinding_2364b74(long param_1,long param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c74a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba3b0);
    FUN_02132f7c(PTR_DAT_04cba3b8);
    FUN_02132f7c(PTR_DAT_04cba3c0);
    FUN_02132f7c(PTR_DAT_04cba3f0);
    bRam0000000004f9c74a = 1;
  }
  puVar4 = PTR_DAT_04cba3b8;
  puVar3 = PTR_DAT_04cba3b0;
                    /* try { // try from 02464bd8 to 02564bdf has its CatchHandler @ 02464da0 */
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if ((*(long *)(param_1 + 0x100) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x100) + 0x58), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02464bfc to 02564bff has its CatchHandler @ 02464d94 */
                    /* try { // try from 02464c00 to 02564c0f has its CatchHandler @ 02464d9c */
                    /* try { // try from 02464c10 to 02564c7b has its CatchHandler @ 02464af4 */
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,lVar8,*(undefined8 *)PTR_DAT_04cba3f0);
  lStack_50 = lStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  do {
    do {
      do {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_60,*(undefined8 *)puVar4);
          lVar8 = lStack_50;
          if ((uVar6 & 1) == 0) goto LAB_02464ccc;
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        } while ((*(char *)(lStack_50 + 0x2c) == '\0') || (*(int *)(lStack_50 + 0x24) != param_3));
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(lStack_50 + 0x28);
        iVar7 = UnityEngine_Event__get_keyCode_44037d0(param_2,0);
      } while (iVar1 != iVar7);
      bVar2 = *(byte *)(lVar8 + 0x20);
                    /* try { // try from 02464c7c to 02564c83 has its CatchHandler @ 02464d4c */
      bVar5 = UnityEngine_Event__get_control_4404508(param_2,0);
    } while (bVar2 != (bVar5 & 1));
    bVar2 = *(byte *)(lVar8 + 0x21);
                    /* try { // try from 02464ca0 to 02564ca3 has its CatchHandler @ 02464d40 */
    bVar5 = UnityEngine_Event__get_shift_44044f4(param_2,0);
                    /* try { // try from 02464ca4 to 02564cb3 has its CatchHandler @ 02464d44 */
  } while ((bVar2 != (bVar5 & 1)) ||
          (bVar2 = *(byte *)(lVar8 + 0x22), bVar5 = UnityEngine_Event__get_alt_440451c(param_2,0),
          bVar2 != (bVar5 & 1)
                    /* try { // try from 02464cb4 to 02564d33 has its CatchHandler @ 02464af4 */));
LAB_02464ccc:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_60,*(undefined8 *)puVar3);
  return uVar6 & 1;
}

