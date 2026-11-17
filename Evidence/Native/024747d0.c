/* IL2CPP: Dino.BusSand.AudioHub$$Has
bool Dino_BusSand_AudioHub__Has (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Has
   bool Dino_BusSand_AudioHub__Has (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const
   MethodInfo* method); */

uint Dino_BusSand_AudioHub__Has_23747d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 024747d8 to 025747df has its CatchHandler @ 02474934 */
  if ((bRam0000000004f9c7e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb1f0);
    bRam0000000004f9c7e8 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 02474810 to 02574817 has its CatchHandler @ 0247492c */
                    /* try { // try from 02474818 to 02574923 has its CatchHandler @ 0247469c */
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uVar3 = Dino_BusSand_AudioHub__Key_23746fc(param_1,param_2);
  if (lVar4 != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___FindEntry_34b4a60
                      (lVar4,uVar3,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)PTR_DAT_04cbb1f0 + 0x20) + 0xc0) + 0x110));
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

